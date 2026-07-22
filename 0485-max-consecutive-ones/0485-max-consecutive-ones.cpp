class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=INT_MIN;
        int count=0;
        for(auto a:nums)
        {
            if(a==1){
                count++;
                maxi=max(maxi,count);
            }
            else 
            {
                count=0;
            }
        }
        if(maxi==INT_MIN)   return 0;
        return maxi;
    }
};