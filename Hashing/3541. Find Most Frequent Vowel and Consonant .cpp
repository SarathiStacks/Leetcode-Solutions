class Solution {
public:
 bool isvowel(char ch) {
        return ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u';
       }
    int maxFreqSum(string s) {
       unordered_map<char,int>freq;
         int maxvow=0,maxcon=0;
            for(char ch:s){
            freq[ch]++;
            if(isvowel(ch)){
                maxvow=max(maxvow,freq[ch]);
            }
            else{
                maxcon=max(maxcon,freq[ch]);
            }
        }
        return maxvow+maxcon;
        }
};