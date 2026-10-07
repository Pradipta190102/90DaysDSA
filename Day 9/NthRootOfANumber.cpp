class Solution {
  public:
  int nthpow(int mid,int n, int m)
  {
      long long res=1;
      for(int i=1;i<=n;i++)
      {
          res=res*mid;
          if(res>m) return 0;
      }
      if(res==m) return 1;
      else return -1;
     
  }
  
    int nthRoot(int n, int m) {
        // Code here
        int low=1;
        int high=m;
        if(m==0 || m==1)
        {
            return m;
        }
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            int status=nthpow(mid,n,m);
            
            if(status==1)
            {
                return mid;
            }
            else if(status==-1)
            {
                 low=mid+1;
            }
            else
            {
                high=mid-1;
               
            }
        }
        return -1;
    }
};