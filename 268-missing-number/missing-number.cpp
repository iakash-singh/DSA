class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total_sum = (n*(double(n+1)/2));
        cout<<total_sum<<endl;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        cout<<sum<<endl;
        return total_sum - sum;
    }
};