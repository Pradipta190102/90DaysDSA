class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long md=1e9+7;
        long long low=min(a,b);
        long long high=(long long)n*min(a,b);
           long long count;
           long long lcm=(a*b)/gcd(a,b);
     while(low<=high)
     {
            long long mid= low+(high-low)/2;
            count=mid/a+mid/b-mid/lcm;
            if(count>=n)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
     }

        return low%md;
    }
};