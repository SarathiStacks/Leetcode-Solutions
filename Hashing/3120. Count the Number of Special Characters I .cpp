class Solution {
public:
    int numberOfSpecialChars(string word) {
        int small[26]={0};
        int caps[26]={0};
        for( char c:word){
            if(c>='a'&&c<='z'){
                small[c-'a']=1;
            }
            else{
                caps[c-'A']=1;
            }
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(small[i]==1&&caps[i]==1){
                count++;
            }
        }
        return count;
    }
};