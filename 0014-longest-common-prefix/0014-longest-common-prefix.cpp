class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string res="";
        string a=strs.front(),b=strs.back();
        for(int i=0;i<a.size() && b.size() && a[i]==b[i];i++)
            res+=a[i];
        return res;
    }
};