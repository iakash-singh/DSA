class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int cm = target - nums[i];
            if(mp.count(cm)){
                return {mp[cm],i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};