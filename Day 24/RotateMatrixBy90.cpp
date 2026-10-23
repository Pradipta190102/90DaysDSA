class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        // code here
       int m=matrix.size();//rows
       int n=matrix[0].size();//columns
       
        for(int i=0;i<=m-1;i++)
       {
           int left=0;
           int right=n-1;
           while(left<=right)
           {
               swap(matrix[i][left],matrix[i][right]);
               left++;
               right--;
           }
       }
       for(int i=0;i<=m-1;i++)
       {
           for(int j=i;j<=n-1;j++)
           {
               swap(matrix[i][j],matrix[j][i]);
           }
       }

      

    }
};