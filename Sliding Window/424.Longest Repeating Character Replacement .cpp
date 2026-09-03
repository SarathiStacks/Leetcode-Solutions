class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxlen=0,maxfreq=0;
        unordered_map<char,int>mp;
        while(r<s.size()){
            mp[s[r]-'A']++;
            int len=r-l+1;
            maxfreq=max(maxfreq,mp[s[r]-'A']);
            if(len-maxfreq<=k){
                maxlen=max(maxlen,len);
            }
            while(len-maxfreq>k&&l<s.size()){
                mp[s[l]-'A']--;
                maxfreq=0;
                for (auto const& pair : mp) {
                    if (pair.second > maxfreq) {
                    maxfreq = pair.second;
                    }
                }
                l++;
                len=r-l+1;
            }
            r++;
        }
        return maxlen;
    }
};