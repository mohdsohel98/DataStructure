class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> freq(26, 0);
        vector<bool> visited(26, false);

        // Count frequency
        for (char c : s)
            freq[c - 'a']++;

        string st;

        for (char c : s) {
            freq[c - 'a']--;

            // Skip if already included
            if (visited[c - 'a'])
                continue;

            // Remove larger characters if they appear later
            while (!st.empty() &&
                   st.back() > c &&
                   freq[st.back() - 'a'] > 0) {
                visited[st.back() - 'a'] = false;
                st.pop_back();
            }

            st.push_back(c);
            visited[c - 'a'] = true;
        }

        return st;
    }
};