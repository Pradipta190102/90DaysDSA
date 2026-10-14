class Solution {
  public:
    int getSecondLargest(vector<int> &nums) {
        // code here
          int n=nums.size();
        int maxi=INT_MIN;
        int smax=0;
        for(int i=0;i<n;i++)
        {
            
            if(nums[i]>maxi)
            {  
                smax=maxi;
                maxi=nums[i];
                
            }
            if(nums[i]>smax && nums[i]<maxi)
            {
                smax=nums[i];
                }
        }
        if(smax==INT_MIN)
        {
            return -1;
        }
        return smax;

    }
};