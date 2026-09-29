class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int prod=a*b;
        int gcd;
        int a1=a;
        int b1=b;
        while(a1!=0 && b1!=0)
        {
             if(a1>b1) a1=a1%b1;
             else b1=b1%a1;
        }
        if(a1==0) gcd=b1;
        else gcd=a1;
        
        int lcm=prod/gcd;
        //cout<<gcd;
       // cout<<" "<<lcm;
        vector<int> res;
        res.push_back(lcm);
        res.push_back(gcd);
        return res;
    }
};