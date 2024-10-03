class Solution {
public:
    int solve(int num){
        int sum =0;
        while(num){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        int ans =0;
        for(char&ch : s){
            int val=ch-'a'+1;
            ans+=val<10?val:(val%10+val/10);
        }

        k-=1;
        while(k-- && ans>=10){
            ans = solve(ans);
        }

        return ans;
    }
};