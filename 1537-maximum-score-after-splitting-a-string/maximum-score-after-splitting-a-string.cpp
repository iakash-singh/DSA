class Solution {
public:
    int maxScore(string s) {
        int ans =0;
        int n = s.size();
        for(int i=0;i<n-1;i++){
            int curr =0;
            for(int j=0;j<=i;j++){
                if(s[j]=='0'){
                    curr++;
                }
            }

            for(int k=i+1;k<n;k++){
                if(s[k]=='1'){
                    curr++;
                }
            }

            ans = max(ans,curr);
        }
        return ans;
    }
};