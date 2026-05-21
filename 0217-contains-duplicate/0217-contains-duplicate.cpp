class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for(auto x:nums)
        {
            if (a.count(x)) return true;
            a.insert(x);
        }
        return false;
    }
};