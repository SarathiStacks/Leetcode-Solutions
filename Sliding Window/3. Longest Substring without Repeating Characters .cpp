class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int left=0;
        int maxlen=0;
        unordered_set<char>window;
        for(int i=0;i<n;i++){
             while (window.count(s[i])) {
                window.erase(s[left]);
                left++;
            }
                window.insert(s[i]);
                maxlen=max(maxlen,i-left+1);
            
        }
        return maxlen;
        
    }
};