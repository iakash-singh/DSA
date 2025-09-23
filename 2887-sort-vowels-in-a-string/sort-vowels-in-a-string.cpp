class Solution {
public:
    string sortVowels(string s) {
        string test;
        for(int i=0;i<s.size();i++){
            char temp = s[i];
            char toLow = tolower(temp);
            if(toLow=='a'||toLow=='e'||toLow=='i'||toLow=='o'||toLow=='u'){
                test+=temp;
            }
        }
        sort(test.begin(),test.end());
        int j =0;
        for(int i=0;i<s.size();i++){
            char temp = s[i];
            char toLow = tolower(temp);
            if(toLow=='a'||toLow=='e'||toLow=='i'||toLow=='o'||toLow=='u'){
                s[i] = test[j];
                j++;
            }
        }
        return s;
    }
};