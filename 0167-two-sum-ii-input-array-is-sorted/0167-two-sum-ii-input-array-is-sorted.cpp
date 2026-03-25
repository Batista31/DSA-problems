class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n =numbers.size();
        int left,right;
        left=0;
        right=n-1;
        int res=0;
        while(left<right)
        {
            res=numbers[left]+numbers[right];
            if(res==target) return {left+1,right+1};
            else if(res<target) left++;
            else right--;
        }
        return {};
    }
};