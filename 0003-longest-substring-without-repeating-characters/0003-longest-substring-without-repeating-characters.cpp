class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(260,0);
        int i=0,j=0;
        int res=1;
        int n=s.size();
        if(n==0)    return 0;
        while(j<n)
        {
            freq[s[j]]++;
            while(freq[s[j]]>1)
            {
                freq[s[i]]--;
                i++;
            }
            res=max(res,j-i+1);
            j++;
        }
        return res;
    }
};