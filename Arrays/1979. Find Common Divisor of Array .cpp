class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        while(nums[n-1]!=0){
        int temp=nums[n-1];
        nums[n-1]=nums[0]%nums[n-1];
        nums[0]=temp;
        }
        return nums[0];
        
    }
};