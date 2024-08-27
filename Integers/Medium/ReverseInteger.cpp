class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        // int i =0;
        while(x!=0){
            int digit = x%10;
            if(ans>INT_MAX/10 || (ans==INT_MAX && digit>7)){
                return 0;
            }
            else if(ans<INT_MIN/10 || (ans==INT_MIN && digit<-8)){
                return 0;
            }
            ans = ans*10 + digit;
             x=x/10;
            // i++;
        }
        return ans;
    }
};