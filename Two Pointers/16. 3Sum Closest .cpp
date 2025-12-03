class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    long long sum=0;
    long long closest=INT_MAX;
    for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;
       while(left<right){
         sum=nums[i]+nums[left]+nums[right];
        if(llabs(sum-target)<llabs(closest-target)){
            closest=sum;
        }
        else if(sum>target){
            right--;
        }
        else if(sum<target){
            left++;
        }
        else{
            return target;
        }
      
       }
    }
return closest;
            }
};