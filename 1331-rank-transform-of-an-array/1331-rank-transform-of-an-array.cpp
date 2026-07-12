class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sortedarr=arr;
        sort(sortedarr.begin(),sortedarr.end());
        sortedarr.erase(unique(sortedarr.begin(),sortedarr.end()),sortedarr.end());
        unordered_map<int,int> rank;
        for(int i = 0; i < sortedarr.size(); i++) {
            rank[sortedarr[i]] = i + 1;
        }

        vector<int> res;
        for(auto a : arr) {
            res.push_back(rank[a]);
        }
        return res;
    }
};