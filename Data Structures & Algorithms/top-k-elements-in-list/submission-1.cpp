class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int>m;
        for(int x:nums)
        {
            m[x]++;
        }
        int n=nums.size();
        vector<vector<int>>v(n+1);
        for(auto x:m)
        {
            int freq=x.second;
            int value=x.first;
            v[freq].push_back(value);
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            for(int x:v[i])
            {
                ans.push_back(x);
                if(ans.size()==k)
                {
                    return ans;
                }
            }
            
        }
        

    }
};
