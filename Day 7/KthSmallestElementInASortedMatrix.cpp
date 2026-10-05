class Solution {
public:
  int upperbound(vector<int> &arr, int m)
      {
          int low=0;
          int high=arr.size()-1;
          while(low<=high)
          {
              int mid=low+(high-low)/2;
              
              if(arr[mid]<=m)
              {
                  low=mid+1;
              }
              else
              {
                  high=mid-1;
              }
              
          }
          return low;
      }
      int lessthanequalto(vector<vector<int>> &mat, int mid)
      {
          int n=mat.size();
           int sum=0;
           for(int i=0;i<n;i++)
           {
               sum=sum+upperbound(mat[i],mid);
           }
           return sum;
      }
    int kthSmallest(vector<vector<int>> &mat, int k) {
        
        // code here
        
       int l=0;
       int r=mat[0].size()-1;
       
       int low=INT_MAX,high=INT_MIN;
       
       for(int i=0;i<mat.size();i++)
       {
           if(mat[i][l]<low)
           {
               low=mat[i][l];
           }
       }
        
       for(int i=0;i<mat.size();i++)
       {
           if(mat[i][r]>high)
           {
               high=mat[i][r];
           }
       }
       int m=mat.size();
       int n=mat[0].size();
      
       while(low<=high)
       {
           int mid=low+(high-low)/2;
           int smeq= lessthanequalto(mat,mid);
           
           if(smeq<=k-1)
           {
               low=mid+1;
           }
           else
           {
               high=mid-1;
           }
       }
       return low;
   
        
    }
};