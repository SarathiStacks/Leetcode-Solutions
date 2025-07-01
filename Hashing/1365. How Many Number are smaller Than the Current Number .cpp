class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // Step 1: Make a copy of the original array
        vector<int> sorted = nums;

        // Step 2: Sort the copied array
        sort(sorted.begin(), sorted.end());

        // Step 3: Create a map to store the first index of each unique number
        unordered_map<int, int> mp;

        // Store: number → number of elements smaller than it
        for (int i = 0; i < sorted.size(); i++) {
            // Only store if number not already in map
            if (mp.find(sorted[i]) == mp.end()) {
                mp[sorted[i]] = i;
            }
        }

        // Step 4: Build the result using the map
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(mp[nums[i]]);
        }

        return res;
    }
};
