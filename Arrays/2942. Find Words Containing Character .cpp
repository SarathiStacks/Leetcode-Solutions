class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>result;
        for(int i=0;i<words.size();i++){
            string word=words[i];
            if(count(word.begin(),word.end(),x)){
                result.push_back(i);
            }
            }
             return result;
        }
        
        
    
};