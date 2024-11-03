class Solution {
public:
    bool rotateString(string s, string goal) {
        int cnt =0;
        int n = s.size();
        while(cnt<n){
            if(s==goal){
                return true;
            }
            char start = s[0];
            s = s.erase(0,1);
            s.push_back(start);
            cout<<s<<endl;
            cnt++;
        }
        return false;
    }
};