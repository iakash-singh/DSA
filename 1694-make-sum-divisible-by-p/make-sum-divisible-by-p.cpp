class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long int sum = 0;

        for(int i=0;i<n;i++){
            sum+=nums[i];
        }

        int target_rem = sum%p;
        if(target_rem==0){
            return 0;
        }

        unordered_map<int,int> mp;
        mp[0] = -1;

        long long int prefix_sum = 0;
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            prefix_sum+=nums[i];

            int current_rem = prefix_sum%p;

            int needed_rem = (current_rem - target_rem + p) % p;

            if(mp.find(needed_rem)!=mp.end()){
                ans = min(ans,i-mp[needed_rem]);
            }
            mp[current_rem] = i;
        }

        if(ans==INT_MAX || ans==n){
            return -1;
        }

        return ans;
    }
};