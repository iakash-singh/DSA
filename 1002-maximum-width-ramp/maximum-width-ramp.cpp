class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size(),i=0,j=0,len=0;
        vector<int> left_min(n,0);
        vector<int> right_max(n,0);

        left_min[0] = nums[0];
        for(int i=1;i<n;i++){
            left_min[i] = min(left_min[i-1],nums[i]);
        }

        right_max[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            right_max[i] = max(right_max[i+1],nums[i]);
        }

        while(i<n && j<n){
            if(left_min[i]<=right_max[j]) j++;
            else i++;
            len = max(len,j-i-1);
        }

        return len;
    }
};