class Solution {
public:
    vector<int> convertVersion(const string &version){
        int num=0;
        vector<int> res;
        for(int i=0;i<version.size();i++){
            if(version[i]=='.'){
                res.push_back(num);
                num = 0;
            }
            else{
                num = num * 10 +(version[i]-'0');
            }
        }
        res.push_back(num);
        return res;
    }
    int compareVersion(string version1, string version2) {
        auto a = convertVersion(version1);
        auto b = convertVersion(version2);

        int n = max(a.size(),b.size());
        for(int i=0;i<n;i++){
            int x = (i<a.size() ? a[i] :0);
            int y = (i<b.size() ? b[i] : 0);

            if(x < y) return -1;
            if(x > y) return 1;
        }

        return 0;

    }
};