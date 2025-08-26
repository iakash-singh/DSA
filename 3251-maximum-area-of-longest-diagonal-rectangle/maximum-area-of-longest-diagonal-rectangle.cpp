class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int max_diag = -1;
        int area = -1;

        for(int i=0;i<dimensions.size();i++){
            int c_diag = ((dimensions[i][0] * dimensions[i][0]) + (dimensions[i][1] * dimensions[i][1]));
            int temp_area = dimensions[i][0] * dimensions[i][1];
            if(c_diag > max_diag || (c_diag == max_diag && temp_area > area)){
                max_diag = c_diag;
                area = temp_area;
            }
        }
        return area;
    }
};