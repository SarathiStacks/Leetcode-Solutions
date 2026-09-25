class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int currsum=0;
        
        int left=0,right=n-1;
        while(left<right){
            currsum=numbers[left]+numbers[right];
            if(currsum==target){
                return {left+1,right+1};
            }
            if(currsum<target){
                left++;
            }
            if(currsum>target){
                right--;
            }
        }
        return {};
    }
};