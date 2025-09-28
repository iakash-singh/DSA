class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = n;
        int size = flowerbed.size();

        if (size == 1) {
            if (flowerbed[0] == 0) cnt--;
            return cnt <= 0;
        }

        if (size == 2) {
            if (flowerbed[0] == 0 && flowerbed[1] == 0) {
                cnt--;
            }
            return cnt <= 0;
        }

        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            cnt--;
        }

        for (int i = 2; i < size; i++) {
            if (flowerbed[i-2] == 0 && flowerbed[i-1] == 0 && flowerbed[i] == 0) {
                flowerbed[i-1] = 1;
                cnt--;
            }
        }

        if (flowerbed[size-1] == 0 && flowerbed[size-2] == 0) {
            cnt--;
        }

        return cnt <= 0;
    }
};
