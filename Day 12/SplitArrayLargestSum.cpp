class Solution {
public:
    int splitpossible(vector<int>& nums,int m)
    {
        int n=nums.size();
        int sum=0;
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
    int maxrange(vector<int>& nums)
    {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
       {
        sum=sum+nums[i];
       }
       return sum;
    }
    int splitArray(vector<int>& nums, int k) {
        
        int low=minrange(nums);
        int high=maxrange(nums);
        int ans;

        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(splitpossible(nums,mid)<=k)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }

        return low;
    }
};