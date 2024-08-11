class Solution {
public:

    int solve(int i, int j, vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i == 0 && j == 0){
            return grid[i][j] == 0 ? 1 : 0;
        }
        if(i < 0 || j < 0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        if(grid[i][j] == 1){
            return 0;
        }

        int up = solve(i - 1, j, grid,dp);
        int left = solve(i, j - 1, grid,dp);
        return dp[i][j] = up + left;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));

        if(obstacleGrid[m-1][n-1] == 1 || obstacleGrid[0][0] == 1){
            return 0;
        }

        return solve(m - 1, n - 1, obstacleGrid,dp);
    }
};