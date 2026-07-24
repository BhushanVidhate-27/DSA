// Title: Cheapest Flights Within K Stops
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/cheapest-flights-within-k-stops/

        pq.push({0, src, 0}); // wt, src, stops

        while(!pq.empty()) {
            node curr = pq.front();pq.pop();
            int wtu = curr.wt;int u = curr.v;int stops = curr.stops;
            if (stops > k) continue;
            for(auto&x : adjList[u]) {//all neighbours vector<pair>. to, price == v, wt
                int v = x.first;int wtv = x.second;
                if (dist[u][stops] == INT_MAX) continue;
                if(stops<= k && dist[v][stops+1] > dist[u][stops] + wtv) {//relaxation
                    dist[v][stops+1] = dist[u][stops] + wtv;
                    pq.push(node(dist[v][stops+1], v, stops+1));
                }
            }
        }
        ll ans = LLONG_MAX;
        for(int i=0; i<k+2; i++) {
            ans = min(1LL*ans, dist[dst][i]);
        }
        return (ans == LLONG_MAX || ans == INT_MAX) ? -1 : ans;
    }
};
