class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(auto x:nums)    ans[x]++;
        for(auto x:nums)    if(ans[x]==1)   return x;
        return 0;
    }
};