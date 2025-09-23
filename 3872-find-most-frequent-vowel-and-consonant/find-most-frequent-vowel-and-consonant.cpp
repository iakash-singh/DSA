class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> mpv,mpc;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                mpv[s[i]]++;
            }
            else{
                mpc[s[i]]++;
            }
        }
        int max1 = 0, max2 =0;
        for(auto it : mpv){
            if(it.second > max1){
                max1 = it.second;
            }
        }
        for(auto it : mpc){
            if(it.second > max2){
                max2 = it.second;
            }
        }
        return max1 + max2;

    }
};