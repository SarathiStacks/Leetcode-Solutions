class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int maxfreq=0;
        for(auto pair : freq){
            maxfreq=max(maxfreq,pair.second);
        } int count=0;
        for(auto pair: freq){
            if(pair.second==maxfreq){
                count+=pair.second;
            }
        }
        return count;
        }
};