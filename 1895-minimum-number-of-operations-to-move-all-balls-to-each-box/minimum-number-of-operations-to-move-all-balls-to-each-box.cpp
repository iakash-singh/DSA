class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int val=0;
            for(int j =i;j<n;j++){
                if(boxes[j]=='1'){
                    val+=(j-i);
                }
            }
            for(int k=0;k<i;k++){
                if(boxes[k]=='1'){
                    val+=(i-k);
                }
            }

            ans.push_back(val);
        }
        return ans;
    }
};