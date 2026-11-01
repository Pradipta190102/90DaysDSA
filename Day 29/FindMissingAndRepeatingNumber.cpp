class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        long long xr=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            xr=xr^arr[i];
            xr=xr^(i+1);
        }
        int bitno=0;
        while(1)
        {
            if((xr&(1<<bitno))!=0)
            {
                break;
            }
            bitno++;
        }
        
        int zero=0;
        int one=0;
        
        for(int i=0;i<n;i++)
        {
            if((arr[i]&(1<<bitno))!=0)
            {
                one=one^arr[i];
            }
            else
            {
                zero=zero^arr[i];
            }
        }
        for(int i=1;i<=n;i++)
        {
            if((i&(1<<bitno))!=0)
            {
                one=one^i;
            }
            else
            {
                zero=zero^i;
            }
        }
        
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==zero)
            {
                cnt++;
            }
        }
        
        
        if(cnt==2)
        {
            return {zero,one};
        }
        return {one,zero};
        
        
    }
};