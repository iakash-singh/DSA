class Solution {
public:
    int maxScore(string s) {
        int rsum=0,lsum=0,ans=INT_MIN;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1'){
                rsum++;
            }
            else{
                lsum++;
            }

            ans = max(ans,lsum-rsum);
        }
        if(s[s.size()-1]=='1'){
            rsum++;
        }
        return ans+rsum;
    }
};