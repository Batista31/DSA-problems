class Solution {
public:
    bool validPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<right){
        if(s[left]!=s[right])
        {
            return isP(s,left+1,right) || isP(s,left,right-1);
        }
        left++;
        right--;
        }
        return true;
    }
    bool isP(string s,int left,int right)
    {
        while(left<right)
        {
            if(s[left++]!=s[right--])
            return false;
        }
        return true;
    }
};