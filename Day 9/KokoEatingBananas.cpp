class Solution {
public:
long long hourstakesn(vector<int>& piles, int n)
{
  long long res=0;
   for(int i=0;i<piles.size();i++)
   {
       if(piles[i]%n==0)
       {
        res=res+piles[i]/n;
       }
       else
       {
         res=1+res+piles[i]/n;
       }
   }
   return res;
}
int maxval(vector<int>& piles)
{
  int maxi=INT_MIN;
  for(int i=0;i<piles.size();i++)
  {
    if(piles[i]>maxi)
    {
        maxi=piles[i];
    }
  }
  return maxi;
}
    int minEatingSpeed(vector<int>& piles, int h) {

        int maxh=maxval(piles);

        int low=1;
        int high=maxh;
         int ans;
        while(low<=high)
        {
             int mid=low+(high-low)/2;

            long long hrs=hourstakesn(piles,mid);

               if(hrs<=h)
               {
                 ans=mid;
                 high=mid-1;
               }
               else
               {
                low=mid+1;
               }
        }
        return ans;
    }
};