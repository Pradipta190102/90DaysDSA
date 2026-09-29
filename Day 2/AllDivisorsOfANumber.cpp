class Solution {
  public:
    vector<int> getDivisors(int n) {
        // code here
        
        vector<int>sd;
        vector<int>ld;
        vector<int>res;

        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                sd.push_back(i);
                
                
                 if(n/i!=i)
            {
                ld.push_back(n/i);
            }
            }
            
           
        }
        
        res=sd;
        for(int i=ld.size()-1;i>=0;i--)
        {
            res.push_back(ld[i]);
        }
        return res;
    }
};