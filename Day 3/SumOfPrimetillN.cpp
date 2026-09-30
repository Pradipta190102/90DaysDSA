
class Solution {
  public:
    int prime_Sum(int k) {
        
         
         int n=k+1;
         int arr[n];
         arr[1]=0;
         arr[0]=0;
       for(int i=2;i<=n;i++)
       {
           arr[i]=1; //starting from 2 all the values are initailly marked as true
           
       }
       for(int i=2;i*i<=n;i++)
       {
           if(arr[i]==1){
           for(int j=i*i;j<n;j=j+i)
           {
                  arr[j]=0;
                   
           }
       }
       }
       
       long long sum=0;
        
       for(int i=1;i<=k;i++)
       {
          
          if(arr[i]==1)
          {
              sum=sum+i;
             
          }
         
       }
        return sum;
    }
};