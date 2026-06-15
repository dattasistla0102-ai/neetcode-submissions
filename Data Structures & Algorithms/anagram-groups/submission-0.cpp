class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> m;
        for(string s:strs)
        {
            string str=s;
            sort(s.begin(),s.end());
            m[s].push_back(str);
        }
        for(auto x:m)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
