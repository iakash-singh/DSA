class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int x = i;
            int count =0;
            while(x!=0){
                if(x&1){
                    count++;
                }
                x = x>>1;
            }
            ans.push_back(count);
        }

        return ans;
    }
};