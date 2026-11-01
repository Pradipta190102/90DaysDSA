class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int l=a.size()-1;
        int r=0;
        
        while(l>=0 && r<=b.size()-1)
        {
            if(b[r]<a[l])
            {
                swap(b[r],a[l]);
               
            }
             l--;
                r++;
        }
        sort(a.begin(), a.end());
        sort(b.begin(),b.end());
    }
};