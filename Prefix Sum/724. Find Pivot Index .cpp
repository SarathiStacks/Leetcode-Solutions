class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int rightsum=totalsum-leftsum-nums[i];
            if(rightsum==leftsum){
                return i;
            }
            else{
                leftsum+=nums[i];
            }
        }
        return -1;
    }
};