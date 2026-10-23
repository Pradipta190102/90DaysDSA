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
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>res;

        for(int i=1;i<=numRows;i++)
        {
            res.push_back(genereaterows(i));
        }

        return res;
        
    }
};