class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n=nums.size();
        long txor=0;
        for(int i=0;i<n;i++)
        {
            txor=txor^nums[i];
        }
        long mask=(txor&(txor-1))^txor;
        vector<int>ans(2,0);
        for(int i=0;i<n;i++)
        {
             if((nums[i]& mask)==0)
             {
                ans[0]=ans[0]^nums[i];
             }
             else
             {
                ans[1]=ans[1]^nums[i];
             }
        }
    return ans;
    }
};