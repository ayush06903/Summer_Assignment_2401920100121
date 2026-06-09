class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if (m > n) return ans;

        sort(p.begin(), p.end());

        for (int i = 0; i <= n - m; i++) {
            string temp = s.substr(i, m);

            sort(temp.begin(), temp.end());

            if (temp == p) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};