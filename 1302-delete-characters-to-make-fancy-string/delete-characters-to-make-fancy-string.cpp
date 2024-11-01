class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();
        string temp = s;
        if (n < 3) {
            return s;
        }
        vector<int> arr;
        for (int i = 0; i < n - 2; i++) {
            if (temp[i] == temp[i + 1] && temp[i] == temp[i + 2]) {
                arr.push_back(i + 2);  
            }
        }
        
        for (int i = arr.size() - 1; i >= 0; i--) {
            s.erase(arr[i], 1);
        }
        return s;
    }
};
