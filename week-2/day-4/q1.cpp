class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;

        while (i < n) {
            int j = i;

            // find end of current word
            while (j < n && s[j] != ' ')
                j++;

            // reverse word from i to j-1
            reverse(s.begin() + i, s.begin() + j);

            i = j + 1; // move to next word
        }

        return s;
    }
};