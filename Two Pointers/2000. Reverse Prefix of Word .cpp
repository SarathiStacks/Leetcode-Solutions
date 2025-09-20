class Solution {
public:
    string reversePrefix(string word, char ch) {
        int left=0,right=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
               right=i;
               break;
               }
        }
        if(right==-1){
                return word;
               }
        while(left<right){
            char temp;
            temp=word[left];
            word[left]=word[right];
            word[right]=temp;
            left++;
            right--;
            }
            return word;
    }
};