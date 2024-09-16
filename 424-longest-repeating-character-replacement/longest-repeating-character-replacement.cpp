class Solution {
public:
    int characterReplacement(string s, int k) {
        int left =0,right =0;
        int maxlen =0,maxcount =0;
        vector<int> count(26,0);

        while(right<s.length()){
            count[s[right]-'A']++;
            maxcount = max(maxcount,count[s[right]-'A']);

            if(right-left+1-maxcount>k){
                count[s[left]-'A']--;
                left++;
            }

            maxlen = max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};