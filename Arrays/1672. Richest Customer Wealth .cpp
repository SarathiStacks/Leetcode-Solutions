class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth=0;
        for(int i=0;i<accounts.size();i++){
            int totalmoney=0;
            for(int j=0;j<accounts[i].size();j++){
                totalmoney+=accounts[i][j];
            }
            maxwealth=max(maxwealth,totalmoney);
        }
        return maxwealth;

        
    }
};