class Solution {
  public:
    bool isplacingpossible(vector<int> &arr, int t, int cows)
    {
        int n=arr.size();
        
        int last=arr[0]; int cntcows=1;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]-last>=t)
            {
                cntcows++;
                 last=arr[i];
            }
              if(cntcows>=cows)
              {
                  return true;
              }
            }
        
        return false;
    }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
       
        sort(arr.begin(),arr.end());
        
        int low=1;
        int high=arr[arr.size()-1]-arr[0];
        
        int ans;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(isplacingpossible(arr,mid,k)==true)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};