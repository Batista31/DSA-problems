class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int n=nums.size();
        return max(dfs(nums, 0, n-2), dfs(nums,1,n-1));
    }

private:
    int dfs(vector<int>& nums,int start, int end) {
        int n=nums.size();
        if(start==end)  return nums[start];
        vector<int> dp(n,-1);
        dp[start]=nums[start];
        dp[start+1]=max(nums[start],nums[start+1]);
        for(int i=start+2;i<=end;i++)
        {
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        return dp[end];
    }
};