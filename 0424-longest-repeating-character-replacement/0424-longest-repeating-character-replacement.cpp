class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(100,0);
        int left=0;
        int ans=0;
        int maxf=0,window;
        for(int right=0;right<s.size();right++)
        {
            freq[s[right]]++;
            maxf=max(maxf,freq[s[right]]);
            window=right-left+1;
            if(window-maxf>k)
            {
                freq[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};