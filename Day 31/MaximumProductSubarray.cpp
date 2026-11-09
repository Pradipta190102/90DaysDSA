class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxm=INT_MIN;
        int n=arr.size();
        int prem=1;
        int suffm=1;
        for(int i=0;i<arr.size();i++)
        {
             if(prem==0) prem=1;
             if(suffm==0)suffm=1;
            prem*=arr[i];
            suffm*=arr[n-i-1];
            int maxi=max(prem,suffm);
            maxm=max(maxm,maxi);
        }
       return maxm; 
    }
};