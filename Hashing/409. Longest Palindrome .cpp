class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>freq;
        int count=0;
        bool hasodd=false;
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        for(auto &p:freq){
            if((p.second%2)==0){
                count+=p.second;
            }
            else{
                count+=p.second-1;
                hasodd=true;
            }
        }
        if(hasodd==true){
            count++;
        }
        return count;
    }
};