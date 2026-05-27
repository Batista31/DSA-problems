class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()==0 || s.size()<t.size()) return "";

        unordered_map<char,int> need;
        unordered_map<char,int> window;

        for(auto h : t)
            need[h]++;

        int count = 0;
        int left = 0, right = 0;
        int start = 0, minLen = INT_MAX;

        while(right < s.size())
        {
            char j = s[right];
            window[j]++;

            if(need.count(j) && window[j] == need[j])
                count++;

            while(count == need.size())
            {
                if(right-left+1 < minLen)
                {
                    minLen = right-left+1;
                    start = left;
                }

                char remove = s[left];
                window[remove]--;

                if(need.count(remove) && window[remove] < need[remove])
                    count--;

                left++;
            }

            right++;
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};