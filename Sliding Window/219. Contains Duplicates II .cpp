class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>window;
        int n=nums.size();
        int left=0;
        for(int i=0;i<n;i++){
            if(window.count(nums[i])){
                return true;
            }
            window.insert(nums[i]);
            if(i-left>=k){
                 window.erase(nums[left]);
                  left++;
            }
        }
        return false;
        }
};