class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int start=0,end=0;
        int maxi;
        for(int i=0;i<n;i++)
        {
            int odd=eac(s,i,i);
            int even=eac(s,i,i+1);
            maxi=max(even,odd);
            if(maxi>end-start){
            start=i-(maxi-1)/2;
            end=i+maxi/2;
        }
        }
        
        return s.substr(start,end-start+1);
        }
        int eac(string s,int i,int j)
        {
            while(i>=0 && j<s.length() && s[i]==s[j])
            {
                i--;j++;
            }
            return j-i-1;
        }
};