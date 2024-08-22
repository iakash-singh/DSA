class Solution {
public:
    int findComplement(int num) {
        long pow2 = 2, temp = num;
        while(temp>>1){
            temp >>=1;
            pow2<<=1;
        }

        return pow2-num-1;
    }
};