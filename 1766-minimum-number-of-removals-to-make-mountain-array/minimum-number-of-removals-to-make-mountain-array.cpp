class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n,-1),suffix(n,-1);
        vector<int> sorted;

        for(int i=0;i<n;i++){
            if(sorted.empty() || sorted.back()<nums[i]){
                sorted.push_back(nums[i]);
            }
            else{
                int index = lower_bound(sorted.begin(),sorted.end(),nums[i]) - sorted.begin();
                sorted[index] = nums[i];
            }

            int index = lower_bound(sorted.begin(),sorted.end(),nums[i]) - sorted.begin();
            prefix[i] = index-1;
        }

        sorted.clear();
        for(int i=n-1;i>=0;i--){
            if(sorted.empty() || sorted.back() < nums[i]) {
                sorted.push_back(nums[i]);
            }
            else{
                int index = lower_bound(sorted.begin(),sorted.end(),nums[i]) - sorted.begin();
                sorted[index] = nums[i];

            }

            int index = lower_bound(sorted.begin(),sorted.end(),nums[i]) - sorted.begin();
            suffix[i] = index-1;
        }

        int ans = n;
        for(int i=1;i<n-1;i++){
            if(prefix[i] == -1 || suffix[i] == -1) continue;
            ans = min(ans, (n - (prefix[i] + suffix[i] + 3)));
        }

        return ans;
    }
};