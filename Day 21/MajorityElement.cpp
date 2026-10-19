class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //moor's voting algo
        int req=nums[0];
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                req=nums[i];
                count=1;
            }

            else if(nums[i]==req)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
      int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]==req)
           {
            cnt++;
           }
        }

        if(cnt>nums.size()/2)
        {
            return req;
        }
        return -1;
        
    }
};