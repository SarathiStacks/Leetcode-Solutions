class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
       int n=arr.size();
        double count=0;
        double sum=0;
        for(int i=n*0.05;i<arr.size()-n*0.05;i++){
            count++;
            sum+=arr[i];
        }
        return sum/count;
        }
};