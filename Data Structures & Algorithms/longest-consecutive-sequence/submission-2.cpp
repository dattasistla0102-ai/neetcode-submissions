class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max=INT_MIN;
        if(nums.empty())
        {
            max=0;
            return max;
        }
        unordered_set<int>s;
        for(int x:nums)
        {
            s.insert(x);
        }
        for(int x:s)
        {
            if(!s.count(x-1))
            {
                int count=1;
                int i=x;
                while(true)
                {
                    if(s.count(i+1))
                    {
                        count++;
                        i++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(count>max)
                {
                    max=count;
                }
            }
        }
        return max;
    }
};
