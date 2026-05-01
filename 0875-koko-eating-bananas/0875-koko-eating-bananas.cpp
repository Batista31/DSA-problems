class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int high=*max_element(piles.begin(),piles.end());
        int low=1,k;
        while(low<high)
        {
            int hours=0;
            k=low+(high-low)/2;

            for(auto pile : piles)
            {
                hours+=(pile+k-1)/k;
            }
            if(hours<=h) high=k;
            else low=k+1;
        }
        return high;
    }
};