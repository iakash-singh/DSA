class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = queries.size();
        vector<int> ans(n);
        vector<pair<int,int>> queriesPair;

        for(int i=0;i<n;i++){
            queriesPair.push_back({queries[i],i});
        }

        sort(queriesPair.begin(),queriesPair.end());
        sort(items.begin(),items.end());
        int itemindex =0,maxbeauty=0;
        for(int i=0;i<queriesPair.size();i++){
            int maxprice = queriesPair[i].first;
            int ogindex= queriesPair[i].second;

            while(itemindex < items.size() && items[itemindex][0]<=maxprice){
                maxbeauty = max(maxbeauty,items[itemindex][1]);
                itemindex++;
            }
            ans[ogindex] = maxbeauty;
        }

        return ans;
    }

};