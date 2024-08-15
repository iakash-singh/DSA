class Solution {
public:

    void solve(vector<vector<int>>& ans,vector<int>&temp,vector<int>&cac,int target,int index){
        if(target==0){
            ans.push_back(temp);
            return ;
        }
        for(int i=index;i<cac.size();i++){
            if(i> index&& cac[i]==cac[i-1]){
                continue;
            }
            if(cac[i]>target) break;
            temp.push_back(cac[i]);
            solve(ans,temp,cac,target-cac[i],i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& cac, int target) {
        sort(cac.begin(),cac.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans,temp,cac,target,0);
        return ans;
    }
};