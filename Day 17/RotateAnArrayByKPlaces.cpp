class Solution {
public:
void reverseArray(int i, int j, vector<int>& nums)
     {
        while(i<=j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;

        }
     }
    void rotate(vector<int>& nums, int k) {

             int n=nums.size();
            
            k=k%n;
        k=n-k;
             reverseArray(0,k-1,nums);
             reverseArray(k,n-1,nums);
             reverseArray(0,n-1,nums);
        
    }
};