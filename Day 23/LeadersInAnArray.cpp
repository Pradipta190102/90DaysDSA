class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        
              int greatest=-1;
              vector<int>ans;
              for(int i=arr.size()-1;i>=0;i--)
              {
                  if(arr[i]>=greatest)
                  {
                      
                      greatest=arr[i];
                      ans.push_back(greatest);
                  }
              }
              int n=ans.size();
              for(int i=0;i<n/2;i++)
              {
                  swap(ans[i],ans[n-i-1]);
              }
        return ans;
    }
};