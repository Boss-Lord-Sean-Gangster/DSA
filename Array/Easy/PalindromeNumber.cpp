class Solution {
public:
    bool isPalindrome(int x) {
    long long reversedNum = 0;
    int originalValue = x;
    if(x<0){
        return false;
    }
    while(x!=0){
        int digit = x%10;
        reversedNum = reversedNum*10 + digit;
        x= x/10;
    }
    return originalValue ==reversedNum;
       
    }
};