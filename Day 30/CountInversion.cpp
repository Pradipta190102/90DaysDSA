class Solution {
  public:
  int mergeArr(int l, int m, int r, vector<int>&arr)
  {
      int left=l;
      int right=m+1;
      int count=0;
      int mid=m;
      vector<int>temp;
      
      while(left<=mid && right<=r)
      {
          if(arr[left]<=arr[right])
          {
              temp.push_back(arr[left]);
              left++;
          }
          else
          {
               temp.push_back(arr[right]);
               count+=mid-left+1;
               right++;
          }
      }
      
      while(left<=mid)
      {
            temp.push_back(arr[left]);
            left++;
      }
      while(right<=r)
      {
           temp.push_back(arr[right]);
            right++;
      }
      for (int i = l; i <= r; i++) {
                  arr[i] = temp[i - l];
              }
      return count;
      
  }
  int mergesort(int l, int r, vector<int> &arr)
  {
      int count=0;
      if(l>=r) return count;
      int mid=(l+r)/2;
      count+=mergesort(l,mid,arr);
      count+=mergesort(mid+1,r,arr);
      count+=mergeArr(l,mid,r,arr);
      return count;
  }
   int numberOfPermutations(int n, vector<vector<int>>& arr) {
        // code here
        int count= mergesort(0, n-1, arr);
         
    }
};
