class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1 = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            sum1+=nums[i];
        }

        int sum2 = (n*(n+1))/2;
        int diff = sum2 - sum1;

        return diff;
    }
};