class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==0){
            return {};
        }
        if(n==1){
            return {{1}};
        }

        vector<vector<int>> ans = generate(n-1);

        vector<int> temp(n,1);
        for(int i=1;i<n-1;i++){
            temp[i] = ans.back()[i-1] + ans.back()[i];
        }

        ans.push_back(temp);
        return ans;
    }
};