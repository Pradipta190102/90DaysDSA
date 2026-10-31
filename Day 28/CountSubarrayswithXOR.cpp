class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        long long val=0;
        long long count=0;
        for(int i=0;i<n;i++)
        {
             val=val^arr[i];
             int x=val^k;
             count=count+mp[x];
             mp[val]++;
        }
        return count;
    }
};