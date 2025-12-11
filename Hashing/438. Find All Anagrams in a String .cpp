class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.length() < p.length()) return {};
        unordered_map<char,int>targetfreq;
        unordered_map<char,int>windowfreq;
        vector<int>result;
        int m=p.length();
        for(int i=0;i<m;i++){
            targetfreq[p[i]]++;
        }

        for(int i=0;i<m;i++){
            windowfreq[s[i]]++;
           }
            if(windowfreq==targetfreq){
                result.push_back(0);
            }
        int left=0,right=m;
        for( right=m;right<s.length();right++){
            windowfreq[s[left]]--;
            if(windowfreq[s[left]]==0){
                windowfreq.erase(s[left]);
            }
            left++;
            windowfreq[s[right]]++;
            if(windowfreq==targetfreq){
                result.push_back(left);
            }
        }
        return result;
    }
};