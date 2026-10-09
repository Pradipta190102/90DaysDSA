class Solution {
  public:
  // Changed m to long long to handle large mid values
  int splitpossible(vector<int>& nums, long long m) 
      {
          int n=nums.size();
          long long sum=0; // Changed to long long to prevent overflow
          int count=1;
          for(int i=0;i<n;i++)
          {
              if(sum+nums[i]<=m)
              {
                 sum=sum+nums[i];
              }
              else
              {
                  sum=nums[i];
                  count++;
              }
          }
          return count;
      }

      int minrange(vector<int>& nums)
      {
         int n=nums.size();
         int maxi=INT_MIN;
         for(int i=0;i<n;i++)
         {
           if(nums[i]>maxi)
           {
              maxi=nums[i];
           }
         }
         return maxi;
      }

      // Changed return type and sum variable to long long
      long long maxrange(vector<int>& nums) 
      {
          int n=nums.size();
          long long sum=0; 
          for(int i=0;i<n;i++)
         {
          sum=sum+nums[i];
         }
         return sum;
      }

      int findPages(vector<int>& nums, int k) {

          if(nums.size()<k)
          {
              return -1;
          }

          // Upgraded binary search boundaries to long long
          long long low=minrange(nums);
          long long high=maxrange(nums); 

          while(low<=high)
          {
              long long mid=low+(high-low)/2;

              if(splitpossible(nums,mid)<=k)
              {
                  high=mid-1;
              }
              else
              {
                  low=mid+1;
              }
          }

          return (int)low; // Cast back to int to match the required return signature

    }
};