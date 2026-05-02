class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int res=0;
        vector<int> left(n,-1);
        vector<int> right(n,-1);
        left[0]=0;
        right[n-1]=0;
        for(int i=1;i<n;i++)
            left[i]=max(left[i-1],height[i-1]);
        for(int j=n-2;j>=0;j--)
            right[j]=max(right[j+1],height[j+1]);

        for(int k=0;k<n;k++)
        {
            int water = min(left[k], right[k]) - height[k];
            res+=max(water,0);
        }
        return res;
    }
};