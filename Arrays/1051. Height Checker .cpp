class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>realheights=heights;
        sort(heights.begin(),heights.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(realheights[i]!=heights[i]){
                count++;
            }
        }
        return count;
        }
};