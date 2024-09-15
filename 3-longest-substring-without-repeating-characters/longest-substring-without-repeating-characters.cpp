class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left =0,right = 0, n = s.size(), ans=0;

        while(left<n && right<n){
            if(st.find(s[right])==st.end()){
                st.insert(s[right]);
                ans = max(ans,right-left+1);
                right++;
            }
            else{
                st.erase(s[left]);
                left++;
            }
        }
        return ans;
    }
};