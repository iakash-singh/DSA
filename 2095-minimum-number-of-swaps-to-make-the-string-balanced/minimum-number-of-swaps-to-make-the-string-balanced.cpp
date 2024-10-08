class Solution {
public:
    int minSwaps(string s) {
        int balance = 0, swaps = 0;
        
        for (char c : s) {
            if (c == '[') {
                balance++;
            } else {
                if (balance > 0) {
                    balance--;  
                } else {
                    swaps++;  
                    balance++; 
                }
            }
        }
        return swaps;
    }
};
