class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty())   return "";
        int start=0;
        int end=0;
        int maxi;
        for(int i=0;i<s.length();i++)
        {
            int odd=eac(s,i,i);
            int even=eac(s,i,i+1);
            maxi=max(odd,even);
            if(maxi>end-start)
        {
            start=i-(maxi-1)/2;
            end=i+maxi/2;
        }
        }
        
        return s.substr(start,end-start+1);
    }
    int eac(const string& s,int l,int r)
    {
        while(l>=0 && r<s.length() && s[l]==s[r])
        {
            l--;r++;
        }
        return r-l-1;
    }
};