class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> remainderCount(k, 0);
        for (int num : arr) {
            int remainder = ((num % k) + k) % k; 
            remainderCount[remainder]++;
        }
        
        // Check pairs
        if (remainderCount[0] % 2 != 0) { 
            return false;
        }
        
        for (int i = 1; i <= k / 2; i++) {
            if (remainderCount[i] != remainderCount[k - i]) { 
                return false;
            }
        }
        
        return true;
    }
};