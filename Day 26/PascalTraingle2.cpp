class Solution {
public:
vector<int> genereaterows(int n)
    {
        vector<int>ans;
        long long a=1;
         ans.push_back(a);
        for(int i=1;i<n;i++)
        {
            
            a=a*(n-i);
            a=a/i;
        ans.push_back(a);
        }
         return ans;
    }
    vector<int> getRow(int rowIndex) {
        return genereaterows(rowIndex+1);
    }
};