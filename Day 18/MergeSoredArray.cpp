class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
           int n1=num1.size();
        int n2=num2.size();
        int i=0;int j=0;
        vector<int>ans;

        while(i<n1 && j<n2)
        {
           
                if(num1[i]<num2[j])
                {

                    ans.push_back(num1[i]);
                    i++;
                }
                else if(num1[i]>num2[j]){
                    ans.push_back(num2[j]);
                    j++;
                }
                else if(num1[i]==num2[j]){
                    ans.push_back(num2[j]);
                    i++;
                    j++;
                }

        }
        while(i<n1)
        {
             if(ans.empty() || ans.back()!=num1[i])
              {
                  ans.push_back(num1[i]);
              }
              i++;
        }
        while(j<n2)
        {
              if(ans.empty() ||ans.back()!=num2[j])
              {
             ans.push_back(num2[j]);
              }
              j++;
        }
        return ans;
        
    }
};