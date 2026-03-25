class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int low,high,mid;
        for(int i=0;i<n-1;i++)
        {
            high=n-1;
            low=i+1;
            while(low<=high){
            mid=(low+high)/2;
            int req=target-numbers[i];
            if(req==numbers[mid])   return {i+1,mid+1};
            else if(req<numbers[mid]) high=mid-1;
            else low=mid+1;
            }
        }
        return {};
    }
};