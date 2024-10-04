class Solution {
public:
    long long dividePlayers(vector<int>& skills) {
        int n = skills.size();
        int left = 0;
        int right = n-1;
        long long int ans = 0;
        int sum =0;
        sort(skills.begin(),skills.end());
        sum = skills[0] + skills[n-1];
        int i=0;
        while(i<n/2 && left<right){
            if(skills[left]+skills[right]==sum){
                ans+=(skills[left]*skills[right]);
            }
            else{
                return -1;
            }
            left++;
            right--;
            i++;
        }
        return ans;
    }
};