class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>seen;
        for(char c:s){
            if(seen.count(c)==1){
                return c;
            }
            else{
                seen.insert(c);
            }
        }
        return ' ';
        }
};