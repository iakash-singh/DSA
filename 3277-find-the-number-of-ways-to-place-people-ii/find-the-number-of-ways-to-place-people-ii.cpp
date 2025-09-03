class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end(),[](auto &a, auto &b){
            if(a[0]==b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });
        int count = 0;
        for(int i=0;i<n;i++){
            int x1 = points[i][0], y1 = points[i][1];
            for(int j=i+1;j<n;j++){
                int x2 = points[j][0], y2 = points[j][1];
                if(y1 < y2){
                    continue;
                }
                bool temp = false;
                for(int k=i+1;k<j;k++){
                    int x3 = points[k][0], y3 = points[k][1];
                    if (y2 <= y3 && y3 <= y1) {
                        temp = true;
                        break;
                    }
                }
                if(!temp){
                    count++;
                }
            }
        }
        return count;
    }
};