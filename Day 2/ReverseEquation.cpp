class Solution {
  public:
    string reverseEqn(string s) {
        // code here.
        string rev="";
        int i=s.size()-1;
        stack<char>st;
        
        while(i>=0){
            
            if(s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-')
            {
                while(!st.empty())
                {
                    rev=rev+st.top();
                    st.pop();
                }
                rev=rev+s[i];
            }
            else
            {
                st.push(s[i]);
            }
            i--;
        }
        
        while(!st.empty())
                {
                    rev=rev+st.top();
                    st.pop();
                }
                
                return rev;
    }
};