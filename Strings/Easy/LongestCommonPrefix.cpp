class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans ="";
        string first = strs[0];
        string last = strs[n-1];
        sort(strs.begin(),strs.end());
        int v = first.size();
        int w = last.size();
        for(int i=0;i<min(v,w);i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};