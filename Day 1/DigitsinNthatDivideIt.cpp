class Solution {
  public:
    bool isDivisible(string& s, int digit)
    {
        if(digit == 1){
                   return true;
               }

               int rem = 0;


               for(int i = 0; i < s.length(); i++){

                   int currentdigit = s[i] - '0';

                   rem = (currentdigit + (rem * 10)) % digit;

               }

               return rem == 0;
    }
    int divisibleByDigits(string& s) {
        // code here
       vector<int>memo(10,0);
       int count=0;
       for(int i=0;i<s.size();i++)
       {
           int digit=s[i]-'0';
           
           if(digit>0){
               if(memo[digit] == 0){

                 memo[digit] = isDivisible(s, digit) ? 1 : -1;

                 }
        
                 if(memo[digit] == 1){
                     count++;
                 }
           }
       }
       return count;
    }
};
