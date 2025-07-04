class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>result(2);
        unordered_set<int>set1(nums1.begin(),nums1.end());
        unordered_set<int>set2(nums2.begin(),nums2.end());
        for(auto ele:set1){
            if(set2.count(ele)==0){
                result[0].push_back(ele);
            }
        }
           for(auto ele:set2){
            if(set1.count(ele)==0){
                result[1].push_back(ele);
            }
        }
        return result;
        }
};