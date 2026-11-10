class Solution {
  public:
    vector<int> sortByFreq(vector<int>& nums) {
        // code here
                   unordered_map<int,int>mp;
                   vector<int>ans;
                for(int i=0;i<nums.size();i++)
                {
                    mp[nums[i]]++;
                }
               sort(nums.begin(),nums.end(),[&](int a, int b){
                   
                   if(mp[a]==mp[b])  return a<b;
                   
                   return mp[a]>mp[b];
                   
                 

               });
               
               return nums;
    }
};