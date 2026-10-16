class Solution {
public:
    int missingNumber(vector<int>& nums) {

      int n=nums.size();
      int ans=0;
      int ans1=0;
      for(int i=0;i<=n;i++)
      {
          ans=ans^i;
      }
      for(int j=0; j<nums.size(); j++)
      {
         ans1=ans1^nums[j];
      }

      int res=ans1^ans;
      return res;
        
    }
};