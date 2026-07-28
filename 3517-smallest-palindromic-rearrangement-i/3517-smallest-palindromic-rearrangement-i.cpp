class Solution {
public:
    string smallestPalindrome(string s) {
        int freq[26] = {0};

        // Count frequencies
        for (char c : s)
            freq[c - 'a']++;

        string left = "";
        char middle = '\0';

        // Build left half and find middle
        for (int i = 0; i < 26; i++) {
            left.append(freq[i] / 2, char(i + 'a'));

            if (freq[i] % 2 == 1)
                middle = char(i + 'a');
        }

        // Build right half
        string right = left;
        reverse(right.begin(), right.end());

        // Return answer
        if (middle != '\0')
            return left + middle + right;
        return left + right;
    }
};