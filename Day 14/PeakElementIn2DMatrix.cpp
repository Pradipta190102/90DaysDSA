class Solution {
public:
    int largestElement(vector<vector<int>>& mat,int mid)
    {
        int maxi=INT_MIN; int idx=-1;
        for(int i=0;i<mat.size();i++)
        {
            if(mat[i][mid]>maxi)
            {
                maxi=mat[i][mid];
                idx=i;
            }
        }
        return idx;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low=0;
        int high=mat[0].size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int row=largestElement(mat,mid);

            int left = (mid - 1 >= 0) ? mat[row][mid - 1] : INT_MIN;
            int right = (mid + 1 < mat[0].size()) ? mat[row][mid + 1] :INT_MIN;

            if(mat[row][mid]>=left &&mat[row][mid]>=right)
            {
                return {row,mid};
            }
            else if(left>mat[row][mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return {};

    }
};