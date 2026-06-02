class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int low=0;
        int high=n-1;
        int mid;
        int idx=0;
        int ans=INT_MAX;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[low]<=arr[high]){
                if(arr[low]<ans){
                    idx=low;
                    ans=arr[low];
                }
                    break;
            }
            if(arr[low]<=arr[mid]){
                if(arr[low]<ans){
                    idx=low;
                    ans=arr[low];
                    }
                low=mid+1;
            }
            else{
               high=mid-1;
               if(arr[mid]<ans){
                    idx=mid;
                    ans=arr[mid];
                    }
            }
           
        }
        return idx;
    }
    
};
