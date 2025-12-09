class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            if(!map.count(target-nums[i])){
                   map[nums[i]]=i;
            }
            else{
                result.push_back(map[target-nums[i]]);
                result.push_back(i);
            }
            
        }
        return result;
        
    }
};