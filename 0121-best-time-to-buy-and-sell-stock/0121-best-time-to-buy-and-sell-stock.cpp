class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int m=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<prices[m]){
                m=i;
            }
            ans=max(ans,prices[i]-prices[m]);
        }
        return ans;
    }
};