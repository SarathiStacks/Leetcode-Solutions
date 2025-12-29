class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Stack to store elements from nums2 that are waiting
        stack<int> st;

        // Map to store next greater element for each value in nums2
        unordered_map<int, int> mp;

        // Step 1: Process nums2
        for (int i = 0; i < nums2.size(); i++) {
            int curr = nums2[i];

            // Resolve all elements smaller than current
            while (!st.empty() && curr > st.top()) {
                mp[st.top()] = curr;
                st.pop();
            }

            // Current element waits for a greater one
            st.push(curr);
        }

        // Step 2: Remaining elements have no next greater
        while (!st.empty()) {
            mp[st.top()] = -1;
            st.pop();
        }

        // Step 3: Build answer for nums1 using the map
        vector<int> ans;
        for (int x : nums1) {
            ans.push_back(mp[x]);
        }

        return ans;
    }
};
