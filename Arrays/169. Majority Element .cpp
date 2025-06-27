#include <vector>
#include <stdexcept>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int el = 0, cnt = 0;
        // First pass: Find the candidate for majority element
        for (int num : nums) {
            if (cnt == 0) {
                el = num;
                cnt = 1;
            } else if (num == el) {
                cnt++;
            } else {
                cnt--;
            }
        }
        
        // Second pass: Verify if the candidate is indeed the majority element
        cnt = 0;
        for (int num : nums) {
            if (num == el) {
                cnt++;
            }
        }
        
        if (cnt > nums.size() / 2) {
            return el;
        } else {
            // Handle the case where there is no majority element
            // Depending on the problem constraints, you might throw an exception,
            // return a sentinel value, or handle it as per your requirements.
            // For example:
            throw std::runtime_error("No majority element found");
            // or
            // return -1; // Assuming all elements are non-negative
        }
    }
};