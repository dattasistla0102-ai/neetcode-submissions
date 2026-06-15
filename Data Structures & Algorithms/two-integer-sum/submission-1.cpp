class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        unordered_map<int,int>m;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            int digit=target-nums[i];
            if(m.count(digit))
            {
                res[0]=m[digit];
                res[1]=i;
            }
            m[nums[i]]=i;
        }
        return res;
    }
};
