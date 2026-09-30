class Solution {
  public:
    string multiplyStrings(string &s1, string &s2) {
        // code here
         if(s1=="0"||s2=="0") return "0";
         
         int res=s1.size()+s2.size();
         vector<int>ans(res,0);
         bool isNegative = false;
         
         int start1 = 0, start2 = 0;

                  if (s1[0] == '-') {
                      isNegative = !isNegative;
                      start1 = 1;
                  }
                  if (s2[0] == '-') {
                      isNegative = !isNegative;
                      start2 = 1;
                  }
         
         for(int i=s1.size()-1;i>=start1;i--)
         {
             for(int j=s2.size()-1;j>=start2;j--)
             {
                 int m=s1[i]-'0';
                 int n=s2[j]-'0';
                 
                 int mul=m*n;
                 int mulpos=i+j+1;
                 int carrypos=i+j;
                 
                 int sum=mul+ans[mulpos];
                 
                 ans[mulpos]=sum%10;
                 ans[carrypos]+=sum/10;
                 
                 
             }
         }
         string str="";
         
         int i = 0;

                  // Fix 2: Skip any leading zeros in the result array
                  while (i < ans.size() && ans[i] == 0) {
                      i++;
                  }
                  
                  
                  if (i == ans.size()) {
                               return "0";
                           }
                           
                           if (isNegative) {
                                        str += "-";
                                    }
        for(;i<ans.size();i++)
        {
            str=str+to_string(ans[i]);
        }
        
        return str;
    }
};