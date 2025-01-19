class Solution {
public:
    string removeDuplicates(string s) {
     string ans = "";
     int index = 0;
     int n = s.length();
     while(index<n){
        if(ans.length()>0 && ans[ans.length()-1] == s[index]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[index]);
        }
        index++;
     }
     return ans;
    }
};