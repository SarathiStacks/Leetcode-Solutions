class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        if(event1[1]<event2[0]||event2[1]<event1[0]){
            return false;
        }
        else{
            return true;
        }
        
        
    }
};