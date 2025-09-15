class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result;
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
            int id1=nums1[i][0],value1=nums1[i][1];
            int id2=nums2[j][0],value2=nums2[j][1];
            if(nums1[i][0]==nums2[j][0]){
                result.push_back({id1,value1+value2});
                i++;
                j++;
            }
            else if(nums1[i][0]<nums2[j][0]){
                 result.push_back({id1,value1});
                i++;
            }
            else{
                 result.push_back({id2,value2});
                 j++;
            }
            
        }
            while (i < nums1.size()) {
            result.push_back(nums1[i]);
            i++;
        }

        while (j < nums2.size()) {
            result.push_back(nums2[j]);
            j++;
        }
        return result;
    }
};