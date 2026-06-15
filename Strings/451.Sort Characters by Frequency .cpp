class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        vector<pair<int,char>>res;
        for(auto it:freq){
            res.push_back({it.second,it.first});
        }
        sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
        
        for(auto it:res){
            while(it.first>0){
                ans+=it.second;
                it.first--;
            }
        }
        return ans;

    }
};