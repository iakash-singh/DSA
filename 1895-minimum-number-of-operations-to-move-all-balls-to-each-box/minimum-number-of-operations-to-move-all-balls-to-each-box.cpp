class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n,0);

        int ballsleft =0, moveleft=0;
        int ballsright=0, moveright=0;

        for(int i=0;i<n;i++){
            ans[i]+=moveleft;
            ballsleft+=boxes[i]-'0';
            moveleft+=ballsleft;

            int j=n-1-i;
            ans[j]+=moveright;
            ballsright+=boxes[j]-'0';
            moveright+=ballsright;
        }

        return ans;
    }
};