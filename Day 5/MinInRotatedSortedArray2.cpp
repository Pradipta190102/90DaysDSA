class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int mini=INT_MAX;
        while(low<=high)
        {
             int mid=low+(high-low)/2; 
              if(arr[low]==arr[mid] && arr[mid]==arr[high])
                         {
                             mini=min(arr[mid],mini);
                            low=low+1;
                            high=high-1;

                            continue;
                         }
   
           if(arr[low]<=arr[mid])
           {
            mini=min(arr[low],mini);
            low=mid+1;
           }
           else if(arr[mid]<=arr[high])
           {
            
              mini=min(arr[mid],mini);
              high=mid-1;
           }
        

        }

        return mini;
    }
};