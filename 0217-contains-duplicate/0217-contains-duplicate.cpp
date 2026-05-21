class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> a;
        for(auto x:nums)
        {
            if (a.find(x)!=a.end()) return true;
            a[x]++;
        }
        return false;
    }
};