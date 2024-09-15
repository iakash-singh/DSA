class Solution {
public:
    vector<int> arrrow = {-1, 0, 1, 0};
    vector<int> arrcol = {0, 1, 0, -1};
    
    bool recursion(vector<vector<char>>& board, string word, vector<vector<int>>& vis, int row, int col, int n, int m, int index) {
        if (index == word.length()) {
            return true;  
        }

        if (row < 0 || col < 0 || row >= n || col >= m || vis[row][col] == 1 || board[row][col] != word[index]) {
            return false;  
        }

        vis[row][col] = 1;  

        for (int i = 0; i < 4; i++) {
            int newrow = row + arrrow[i];
            int newcol = col + arrcol[i];

            if (recursion(board, word, vis, newrow, newcol, n, m, index + 1)) {
                return true;
            }
        }

        vis[row][col] = 0;  

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0] && recursion(board, word, vis, i, j, n, m, 0)) {
                    return true; 
                }
            }
        }

        return false; 
    }
};
