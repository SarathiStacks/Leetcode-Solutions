class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        stack<char>st;
        string result="";
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                char c=st.top();
                if(c==s[i]){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
       while(!st.empty()){
        result.push_back(st.top());
        st.pop();
       }
        reverse(result.begin(),result.end());
        return result;
    }
};