class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,MinLength=INT_MAX;
        int length=0;
        int sum=0;
        for(int right=0;right<nums.size();right++)
        {
            sum+=nums[right];
            while(sum>=target)  
            {
                MinLength=min(MinLength,right-left+1);
                sum-=nums[left];
                left++;
                
            }
        }
        return MinLength==INT_MAX ? 0:MinLength;
    }
};