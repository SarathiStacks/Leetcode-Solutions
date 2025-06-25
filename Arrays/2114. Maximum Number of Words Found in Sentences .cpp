class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxwords=0;
        for(int i=0;i<sentences.size();i++){
            int spacecount=count(sentences[i].begin(),sentences[i].end(),' ');
            maxwords=max(maxwords,spacecount+1);
            }
        return maxwords;
        }
};