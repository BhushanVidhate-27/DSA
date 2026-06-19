// Title: Sudoku Solver
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/sudoku-solver/


        if(board[i][j] != '.') {
        }

        for(int c=1; c<10; c++) {
            if(isValid(board, m, n, i, j, c)) {
                board[i][j] = c + '0';
                if(rec(board,m,n,i,j+1)) return true;
            return rec(board,m,n,i,j+1);
                board[i][j] = '.';
            }
        }
        return false;
        
    }
    void solveSudoku(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        
