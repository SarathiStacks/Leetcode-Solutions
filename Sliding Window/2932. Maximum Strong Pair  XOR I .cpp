class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int maxres = 0;
    for(int i=0;i<n;i++){
        int j=i;
        while(j < n && abs(nums[i] - nums[j]) <= min(nums[i], nums[j])){
            maxres = max(maxres, nums[i] ^ nums[j]);
            j++;
        }
    }
    return maxres;

    }
};