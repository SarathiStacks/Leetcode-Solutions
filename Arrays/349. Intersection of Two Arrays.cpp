class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
         unordered_set<int>nums3;
         
        for(int x:nums1){
            s.insert(x);
        }
        for(int i=0;i<nums2.size();i++){
            if(s.count(nums2[i])){
                nums3.insert(nums2[i]);
            }
        }
        vector<int>result(nums3.begin(),nums3.end());
        return result;

    }
};