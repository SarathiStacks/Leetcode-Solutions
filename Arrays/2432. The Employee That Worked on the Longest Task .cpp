class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int maximum=logs[0][1],emp=logs[0][0],prev=logs[0][1];
        for(int i=1;i<logs.size();++i){
            int diff=logs[i][1]-prev;
            if(diff>maximum){
                maximum=diff;
                emp=logs[i][0];
            }
            else if(diff==maximum){
                emp=min(emp,logs[i][0]);
                }
            prev=logs[i][1];
        }
        return emp;
        
    }
};