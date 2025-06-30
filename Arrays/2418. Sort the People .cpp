class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(heights[j]>heights[i]){
                    string temp=names[i];
                    names[i]=names[j];
                    names[j]=temp;

                    int temp1=heights[i];
                    heights[i]=heights[j];
                    heights[j]=temp1;
                    }
            }
        }
        return names;
        
    }
};