class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string num="123456789";
        for(int length=2;length<=9;length++)
        {
            for(int start=0;start+length<=9;start++)
            {
                int no=stoi(num.substr(start,length));
                if(no<=high && no>=low)
                    ans.push_back(no);
            }
        }
        return ans;
    }
};