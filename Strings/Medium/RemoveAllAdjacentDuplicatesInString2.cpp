class Solution {
public:
    string removeDuplicates(string s, int k) {
        int count = 1;
        for(int i=1; i<s.size()-1;i++ ){
            if(s[i]!=s[i-1]){
                count =1;
            }
            else if(++count==k){
                return removeDuplicates(s.substr(0,i-k+1)+s.substr(i+1),k);
            }
        }
        return s;
    }
};