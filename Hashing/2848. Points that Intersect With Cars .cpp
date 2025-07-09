class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        bool covered[101]={false};
        for(int i=0;i<nums.size();i++){
            int start=nums[i][0], end=nums[i][1];
            for(int i=start;i<=end;i++){
                covered[i]=true;
            }
        }
        int count=0;
        for(int i=0;i<101;i++){
            if(covered[i]==true){
                count++;
            }
        }
        return count;
    }
};