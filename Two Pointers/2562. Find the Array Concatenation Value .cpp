class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        long long sum=0;
        while(left<right){
            string a=to_string(nums[left]);
            string b=to_string(nums[right]);
            sum+=stoll(a+b);
            left++;
            right--;
        }
        if(left==right){
            sum+=(nums[left]);
        }
        return sum;
    }
};