class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        
         int j=0;
    int count=0;
    int n=arr.size();
    int maxi=0;
    while(j<n)
    {
        if(arr[j]==1)
        {
            count=count+1;
            if(count>maxi)
            {
                maxi=count;
            }

        }
        else
        {
            count=0;
        }
        j++;
    }
    return maxi;
    }
};