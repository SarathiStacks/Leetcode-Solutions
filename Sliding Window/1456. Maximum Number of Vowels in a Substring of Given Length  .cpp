class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        unordered_set<char>vowel{'a','e','i','o','u'};
        int left=0;
        int right=0;
        int count=0;
        int maxlen=0;
        for(right=0;right<k;right++){
            if(vowel.count(s[right])){
                count++;
               }
               }
         maxlen=count;
        for(right=k;right<n;right++){
            if(vowel.count(s[right])){
                count++;
            }
            if(vowel.count(s[left])){
                count--;
            }
           left++;
           maxlen = max(maxlen, count);
        }
        return maxlen;
    }
};