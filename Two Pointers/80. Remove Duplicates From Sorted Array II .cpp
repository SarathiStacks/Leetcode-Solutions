class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int slow=0;
        int fast=0;
        for(int fast=0;fast<n;fast++){
            if(slow<2||nums[fast]!=nums[slow-2]){
                nums[slow]=nums[fast];
                slow++;
                
            }
            else{
                continue;
               }
        }
        return slow;
        
    }
};