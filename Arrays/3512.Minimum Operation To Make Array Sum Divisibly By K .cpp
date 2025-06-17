class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum+=nums[i];
        }
        return totalsum%k;
    }
};