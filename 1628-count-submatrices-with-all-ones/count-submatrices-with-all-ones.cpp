class Solution {
public:

    int dArrayCount(vector<int>& vec){
        int cons = 0;
        int subCount = 0;

        for(int &val : vec){
            if(val ==0){
                cons = 0;
            }
            else{
                cons++;
            }

            subCount+=cons;
        }
        return subCount;
    }
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int result = 0;

        for(int start = 0;start<m;start++){
            vector<int> vec(n,1);
            for(int end = start; end<m; end++){
                for(int col =0;col<n;col++){
                    vec[col] = vec[col] & mat[end][col];
                }
                result+= dArrayCount(vec);
            }
        }
        return result;
    }
};