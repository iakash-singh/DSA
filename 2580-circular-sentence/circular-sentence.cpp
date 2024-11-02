class Solution {
public:
    bool isCircularSentence(string s) {
        int n = s.size();
        string temp;
        vector<string> arr;
        
        
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                arr.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
        }
        arr.push_back(temp);  

       
        if (arr.size() == 1) {
            int n = arr[0].size();
            return arr[0][0] == arr[0][n - 1];
        }

        
        for (int i = 0; i < arr.size() - 1; i++) {
            int prev = arr[i].size();
            if (arr[i][prev - 1] != arr[i + 1][0]) {
                return false;
            }
        }

       
        int siz = arr.size();
        int x = arr[siz - 1].size();
        if (arr[siz - 1][x - 1] != arr[0][0]) {
            return false;
        }
        
        return true;
    }
};
