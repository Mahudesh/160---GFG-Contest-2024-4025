class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr)
    {
        // code here...
        int sum=0;
        int maxSum=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
            maxSum=max(maxSum,sum);
            if(sum<0)
            sum=0;
        }
        return maxSum;
    }
};
