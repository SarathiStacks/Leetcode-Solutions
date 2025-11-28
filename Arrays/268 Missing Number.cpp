class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int totalsum=(n*(n+1)/2);
        int currarrsum=0;
        for(int i=0;i<nums.size();i++){
            currarrsum+=nums[i];
        }
        return totalsum-currarrsum;
        
    }
};