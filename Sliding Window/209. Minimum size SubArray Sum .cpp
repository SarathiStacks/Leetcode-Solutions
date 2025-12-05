class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;
        int minlen=INT_MAX;
        int sum=0;
        for(right=0;right<n;right++){
            sum=sum+nums[right];
           while(sum>=target){
            minlen=min(minlen,right-left+1);
            sum=sum-nums[left];
            left++;
           }
    }
         if(minlen==INT_MAX){
            return 0;
           }
        return minlen;
        
    }
};