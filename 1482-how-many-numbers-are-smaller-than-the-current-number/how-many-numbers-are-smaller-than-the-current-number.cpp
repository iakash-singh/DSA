class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int cnt = 0;
            for(int j =0;j<i;j++){
                if(nums[j] < nums[i]){
                    cnt++;
                }
            }
            for(int k = i+1;k<nums.size();k++){
                if(nums[k]< nums[i]){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};