class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        
         int start=0;
    int end=nums.size()-1;
    int mid=(start+end)/2;
    int fstoc=-1;
    while(start<=end)
    {
        if(nums[mid]==x)
        {
            fstoc=mid;
            end=mid-1;
        }
        if(nums[mid]>x)
        {
            end=mid-1;
        }
          if(nums[mid]<x)
        {
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    start=0;
     end=nums.size()-1;
     mid=(start+end)/2;
    int lstoc=-1;
     while(start<=end)
    {
        if(nums[mid]==x)
        {
            lstoc=mid;
            start=mid+1;
        }
        if(nums[mid]>x)
        {
            end=mid-1;
        }
          if(nums[mid]<x)
        {
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    
    return {fstoc,lstoc};
    }
};