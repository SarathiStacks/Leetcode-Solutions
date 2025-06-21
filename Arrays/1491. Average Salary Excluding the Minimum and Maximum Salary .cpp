class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double count=0;
        double sum=0;
        for(int i=1;i<salary.size()-1;i++){
            count++;
            sum+=salary[i];
            }
            return sum/count;

        
    }
};