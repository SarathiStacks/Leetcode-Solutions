class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        int n=temperatures.size();
        vector<int>ans(n,0);
        for(int i=0;i<temperatures.size();i++){
            while(!s.empty()&&temperatures[i]>temperatures[s.top()]){
                ans[s.top()]=i-s.top();
                s.pop();
            }
            s.push(i);
        }
        return ans;

    }
};