class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> ans(word.size(),0);
        long long int num = 0;
        for(int i=0;i<word.size();i++){
            num = (num*10 + (word[i]-'0')) % m;
            if(num==0){
                ans[i] = 1;
            }
        }
        return ans;
    }
};