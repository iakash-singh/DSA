class Solution {
public:
    string compressedString(string word) {
        int n=word.size();
        int i = 0;
        string comp;
        if(n==0){
            return comp;
        }
        
        while(i<n){
            char cc = word[i];
            int length = 0;

            while(i<n && length<9 && word[i]==cc){
                length++;
                i++;
            }

            comp+= to_string(length) + cc;
        }
        return comp;
    }
    
    
};