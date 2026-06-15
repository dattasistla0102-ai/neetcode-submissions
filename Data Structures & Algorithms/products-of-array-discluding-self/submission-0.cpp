class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                pre[i]=1;
            }
            else
            {
                pre[i]=nums[i-1]*pre[i-1];
            }
        }
        vector<int> suf(nums.size());
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i==nums.size()-1)
            {
                suf[i]=1;
            }
            else
            {
                suf[i]=nums[i+1]*suf[i+1];
            }
        }
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=pre[i]*suf[i];
        }
        return ans;
    }
};
