class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      vector<int> freq1(26,0);
      vector<int> freq2(26,0);
      int k=s1.size();
      if(s2.size()<s1.size())   return false;
      for(int i=0;i<k;i++){
        freq1[s1[i]-'a']++;
        freq2[s2[i]-'a']++;
      }
    if(freq1==freq2)    return true;
    for(int right=k;right<s2.size();right++)
    {
        freq2[s2[right]-'a']++;
        freq2[s2[right-k]-'a']--;
        if(freq1==freq2)    return true;
    }
      return false;
    }
};