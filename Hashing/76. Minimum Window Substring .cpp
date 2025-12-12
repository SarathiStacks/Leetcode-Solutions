class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty()) return "";
        if (s.size() < t.size()) return "";
        unordered_map<char,int> targetfreq;
        unordered_map<char,int> windowfreq;
        int minlen = INT_MAX;
        int minstart = 0;
        for (int i = 0; i < (int)t.length(); i++) {
            targetfreq[t[i]]++;
        }
        int need = targetfreq.size();
        int left = 0, have = 0;
        for (int right = 0; right < (int)s.length(); right++) {
            char in = s[right];
            windowfreq[in]++;

            // check count only if in target (count first, then compare)
            if (targetfreq.count(in) > 0 && windowfreq[in] == targetfreq[in]) {
                have++;
            }

            while (have == need) {
                int currLen = right - left + 1;
                if (currLen < minlen) {
                    minlen = currLen;
                    minstart = left;
                }

                char out = s[left];
                windowfreq[out]--;

                // check break condition only if out is required (count first)
                if (targetfreq.count(out) > 0 && windowfreq[out] < targetfreq[out]) {
                    have--;
                }

                if (windowfreq[out] == 0) {
                    windowfreq.erase(out);
                }
                left++;
            }
        }
        if (minlen == INT_MAX) return "";
        return s.substr(minstart, minlen);
    }
};
