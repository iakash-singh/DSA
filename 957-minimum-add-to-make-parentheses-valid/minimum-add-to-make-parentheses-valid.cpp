class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for(char c : s){
            if(st.empty() || c=='('){
                st.push(c);
            }
            else{
                if(c==')' && st.top()!='('){
                    st.push(c);
                }
                else{
                    st.pop();
                }
            }
        }
        return st.size();
    }
};