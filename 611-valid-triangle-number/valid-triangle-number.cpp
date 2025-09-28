class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = 0;
        for(int i=2;i<n;i++){
            int j = 0,k=i-1;
            while(j<k){
                if(nums[j]+nums[k]>nums[i]){
                    ans+=(k-j);
                    k--;
                }

                else{
                    j++;
                }
            }
        }
        return ans;
    }
};