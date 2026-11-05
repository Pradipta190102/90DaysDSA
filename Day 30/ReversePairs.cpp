class Solution {
public: void mergeArr(int l, int m, int r, vector<int>&arr)
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
      
  }
  int countPairs(int low, int mid, int high,vector<int>&arr)
  {
    int count=0;
    int right=mid+1;
    for(int i=low;i<=mid;i++)
    {
        while(right<=high && arr[i]>(long long)2*arr[right])
        {
            right++;
         
        }
           count+=right-(mid+1);
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
      count+=countPairs(l,mid,r,arr);
      mergeArr(l,mid,r,arr);
      return count;
  }
    int reversePairs(vector<int>& arr) {
         int n=arr.size();
        int count= mergesort(0, n-1, arr);
        return count;
    }
};