// Title: Find a Safe Walk Through a Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/find-a-safe-walk-through-a-grid/


                if (dist[r][c] + wt < dist[nr][nc]) {
                    dist[nr][nc] = dist[r][c] + wt;

                    if (wt == 1) {
                int wt = grid[nr][nc];

                        dq.push_back(make_pair(nr, nc));
                    } else {
                        dq.push_front(make_pair(nr, nc));
                    }
            }
        }
        return dist[n - 1][m - 1] < health;
                }
    }
};
