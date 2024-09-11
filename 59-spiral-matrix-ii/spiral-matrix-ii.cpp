class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int a = 1;
 
        int top = 0, left = 0, bottom = n - 1, right = n - 1;

        while (top <= bottom && left <= right) {
            
            for (int i = left; i <= right; i++) {
                ans[top][i] = a;
                a++;
            }
            top++;

            
            for (int i = top; i <= bottom; i++) {
                ans[i][right] = a;
                a++;
            }
            right--;

            
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans[bottom][i] = a;
                    a++;
                }
                bottom--;
            }

            
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans[i][left] = a;
                    a++;
                }
                left++;
            }
        }
        return ans;
    }
};
