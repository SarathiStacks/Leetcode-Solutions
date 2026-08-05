class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>s;
        int n=heights.size();
        int maxi=INT_MIN;
        int nse,pse,curr;
        for(int i=0;i<n;i++){
            while(!s.empty()&&heights[s.top()]>heights[i]){
                curr=s.top();
                s.pop();
                nse=i;
                pse=s.empty()?-1:s.top();
                maxi=max(maxi,(heights[curr]*(nse-pse-1)));
            }
            s.push(i);
        }
        while(!s.empty()){
            curr=s.top();
            s.pop();
            nse=n;
            pse=s.empty()?-1:s.top();
            maxi=max(maxi,(heights[curr]*(nse-pse-1)));
        }
        return maxi;
    }
};