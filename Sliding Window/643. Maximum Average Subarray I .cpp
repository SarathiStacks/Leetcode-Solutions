class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int right=k;
        int sum=0;
        for(int i=0;i<k;i++){
         sum=sum+nums[i];
           }
         int maxsum=sum;
        for(int i=k;i<n;i++){
            sum=sum-nums[left]+nums[right];
            maxsum=max(maxsum,sum);
            left++;
            right++;
        }
        return (double)maxsum/k;
        
    }
};