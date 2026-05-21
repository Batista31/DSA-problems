class Solution {
public:
    int hammingWeight(int n) {
     int ans=0;
     for(int i=0;i<=log2(n);i++)
     {
        ans+=(n>>i) & 1;
     }   
     return ans;
    }
};