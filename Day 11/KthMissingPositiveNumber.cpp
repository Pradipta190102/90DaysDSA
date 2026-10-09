class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

     int low=0;
     int high=arr.size()-1;
     while(low<=high)
     {
          int mid=low+(high-low)/2;
           int diff=arr[mid]-(mid+1);
           

           if(diff>=k)
           {
            high=mid-1;
           }
           else
           {
             low=mid+1;

           }
     }

     int fans=k+high+1;
     return fans;
        
    }
};