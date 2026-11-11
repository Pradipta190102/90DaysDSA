class Solution {
public:
    int maximumGap(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto a:nums)
        {
            pq.push(a);
        }
        int tp=pq.top();
        int maxG=0;
          while(!pq.empty())
          {
            int gap=tp-pq.top();
            maxG=max(gap,maxG);
            tp=pq.top();
             pq.pop();
          }
          return maxG;
    }
};