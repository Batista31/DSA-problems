class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> res;
        vector<vector<int>> ans;
        ans.push_back({});
        for(int i=1;i<1<<nums.size();i++)
        {
            res={};
            for(int n=0;n<nums.size();n++){
            if(i&(1<<n))
                res.push_back(nums[n]);
        }
         ans.push_back(res);
        }
        return ans;
    }
};