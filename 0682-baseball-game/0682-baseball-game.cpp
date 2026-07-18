class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (string x : operations) {
            if (x == "C") {
                st.pop();
            }
            else if (x == "D") {
                st.push(2 * st.top());
            }
            else if (x == "+") {
                int last = st.top();
                st.pop();

                int secondLast = st.top();
                st.push(last);

                st.push(last + secondLast);
            }
            else {
                st.push(stoi(x));   // normal number, including negative numbers
            }
        }

        int result = 0;

        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        return result;
    }
};