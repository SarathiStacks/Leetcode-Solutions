class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        vector<vector<string>>result;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string key=strs[i];
            sort(key.begin(),key.end());
            map[key].push_back(strs[i]);
        }
        for(auto &p:map){
            result.push_back(p.second);
        }
        return result;
    }
};