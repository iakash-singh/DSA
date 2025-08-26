class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> st(nums.begin(),nums.end());
        int m = st.size();
        cout<<m<<endl;
        if(n != m){
            return true;
        }
        return false;
    }
};