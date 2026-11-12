class Solution {
  public:
    bool findSwapValues(vector<int>& a, vector<int>& b) {
        // code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int sum1=0;
        int sum2=0;
        for(int i=0;i<a.size();i++)
        {
            sum1+=a[i];
        }
          for(int i=0;i<b.size();i++)
        {
            sum2+=b[i];
        }
        
        int l1=0;
        int l2=0;
        
        while(l1<a.size() && l2<b.size())
        {
            int val1=sum1-a[l1]+b[l2];
            int val2=sum2-b[l2]+a[l1];
            
            if(val1>val2)
            {
                l1++;
            }
            else if(val1<val2)
            {
                l2++;
            }
            
            if(val1==val2)
            {
                return true;
            }
        }
        return false;
    }
};