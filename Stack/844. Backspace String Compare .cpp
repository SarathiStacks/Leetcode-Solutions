class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;

        // Process string s
        for (char c : s) {
            if (c != '#') {
                st1.push(c);
            } else {
                if (!st1.empty()) {
                    st1.pop();
                }
            }
        }

        // Process string t
        for (char c : t) {
            if (c != '#') {
                st2.push(c);
            } else {
                if (!st2.empty()) {
                    st2.pop();
                }
            }
        }

        // Build final strings
        string res1 = "", res2 = "";

        while (!st1.empty()) {
            res1.push_back(st1.top());
            st1.pop();
        }

        while (!st2.empty()) {
            res2.push_back(st2.top());
            st2.pop();
        }

        // Reverse because stack gives reverse order
        reverse(res1.begin(), res1.end());
        reverse(res2.begin(), res2.end());

        return res1 == res2;
    }
};
