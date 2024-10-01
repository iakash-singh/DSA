class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> reminder(k,0);
        
        for(int num : arr){
            int remi = ((num%k)+k)%k;
            reminder[remi]++;
        }

        if(reminder[0]%2!=0){
            return false;
        }
        for(int i=1;i<=k/2;i++){
            if(reminder[i]!=reminder[k-i]){
                return false;
            }
        }

        return true;
    }
};