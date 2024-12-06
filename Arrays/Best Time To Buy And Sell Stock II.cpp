class Solution {
  public:
    int maximumProfit(vector<int> &prices)
    {
        // code here
        int maxProfit=0;
        for(int i=1;i<prices.size();i++)
        {
            int sum=prices[i]-prices[i-1];
            if(sum>0)
            maxProfit+=sum;
        }
        return maxProfit;
    }
};
