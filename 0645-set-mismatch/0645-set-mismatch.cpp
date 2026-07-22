class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());

        int duplicate = -1;
        int missing = -1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1])
                duplicate = nums[i];

            if (nums[i + 1] - nums[i] > 1)
                missing = nums[i] + 1;
        }

        if (missing == -1) {
            if (nums[0] != 1)
                missing = 1;
            else
                missing = nums.size();
        }

        return {duplicate, missing};
    }
};