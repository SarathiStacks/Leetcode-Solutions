class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        for(int i:nums){
            int index=abs(i)-1;
           if(nums[index]>0){
             nums[index]=-abs(nums[index]);
           }
           else{
                 result.push_back(abs(i));
           }
        }
        return result;
        
    }
};