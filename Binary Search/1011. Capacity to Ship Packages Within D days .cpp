class Solution {
public:
    int capac_satis(vector<int>& weights,int mid){
        int load=0,days=1;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>mid){
                days++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int totalsum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            totalsum+=weights[i];
            maxsum=max(maxsum,weights[i]);
        }
        int low=maxsum;
        int high=totalsum;
        while(low<=high){
            int mid=(high+low)/2;
            int noofdays=capac_satis(weights,mid);
            if(noofdays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};