class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>freq;
        unordered_set<int>added;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]>1&&!added.count(nums[i])){
                ans.push_back(nums[i]);
                added.insert(nums[i]);
            }
        }
        return ans;

        
    }
};