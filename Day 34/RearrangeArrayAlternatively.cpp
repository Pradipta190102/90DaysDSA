class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        sort(arr.begin(),arr.end());
        vector<int>ans;
        int l=0;
        int r=arr.size()-1;
        int n=arr.size();
        int maxi=arr[n-1]+1;
        
        for(int i=0;i<n;i++)
        {
            if(i%2!=0)
            {
                arr[i]=(arr[l]%maxi)*maxi+arr[i];
                l++;
            }
            else
            {
                arr[i]=(arr[r]%maxi)*maxi+arr[i];
                r--;
            }
        }
        
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=arr[i]/maxi;
        }
    }
};