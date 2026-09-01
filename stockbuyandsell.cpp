class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        
        // code here
        int buy=prices[0];
        int maxprof=0,prof=0;
        
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>buy)
            {
                prof=prices[i]-buy;
                maxprof=max(prof,maxprof);
            }
            else
            {
                buy=prices[i];
            }
        }
        return maxprof;
    }
};
