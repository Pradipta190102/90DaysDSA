class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                neg.push_back(nums[i]);
            }else
            {
                pos.push_back(nums[i]);
            }
        }

        if(pos.size()>neg.size())
        {
            


            for(int i=0;i<neg.size();i++)
            {
                nums[2*i]=pos[i];
                nums[2*i+1]=neg[i];
             
            } int idx=neg.size()*2;
            for(int i=neg.size();i<pos.size();i++)
            {
                nums[idx]=pos[i];
                idx++;
            }
           
        }
        else
        {
             for(int i=0;i<pos.size();i++)
            {
                nums[2*i]=pos[i];
                nums[2*i+1]=neg[i];
             
            } int idx=pos.size()*2;
            for(int i=pos.size();i<neg.size();i++)
            {
                nums[idx]=neg[i];
                idx++;
            }
        }
        return nums;

    }
};