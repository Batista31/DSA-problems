class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> num=nums;
        sort(num.begin(),num.end());
        for(int i=0;i<num.size();i++)
        {
            if(mp.find(num[i]) == mp.end())
    mp[num[i]] = i;
        }
        for(int i=0;i<nums.size();i++)
        nums[i]=mp[nums[i]];
        return nums;
    }
};