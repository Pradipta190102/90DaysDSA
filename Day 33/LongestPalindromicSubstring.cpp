class Solution {
public:
 string checkpalindrome(int l,int r, string &s)
 {
    int maxlen=1;
    string str="";
    while(r<=s.length()-1 && l>=0 && s[l]==s[r])
    {
         maxlen=r-l+1;
         str=s.substr(l,maxlen);
         l--;
         r++;
    }
    return str;
 }
    string longestPalindrome(string s) {
        string overalllongest="";
         string current_best ="";
        string odd="";
        string even="";
           for(int i=0;i<s.size();i++)
           {
             odd=checkpalindrome(i,i,s);
             even=checkpalindrome(i,i+1,s);
           string current_best = odd.length() >= even.length() ? odd : even;

           if(current_best.length()>=overalllongest.length())
           {
             overalllongest=current_best;
           }
             
           }

           return overalllongest;
    }
};