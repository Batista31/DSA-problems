class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int w=0;
        int count=0;
        int i=1;
        while(w!=n)
        {
            if(w<8*i)
            count+=i;
            else if(w==8*i)
            {
                i++;
                count+=i;
            }
            w++;
        }
        return count;
    }
};