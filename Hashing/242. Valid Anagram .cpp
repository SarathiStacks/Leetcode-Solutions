class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freqs;
        unordered_map<char,int>freqt;
        if(s.length()!=t.length()){
                return false;
            }
        for(int i=0;i<s.length();i++){
            freqs[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            freqt[t[j]]++;
        }
        for(auto &p:freqs){
            char key=p.first;
            int val=p.second;
            if(freqt.count(key)==0){
                return false;
            }
            else{
                if(freqt[key]!=freqs[key]){
                    return false;
                }
            }
        }
        return true;
        }
};