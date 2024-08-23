class Solution {
public:
    int pivotInteger(int n) {
        int leftSum = 0;
        int totalSum = 0;
        for(int i=0;i<=n;i++){
            totalSum+=i;
        }
        for(int i=0;i<=n;i++){
            if(leftSum == totalSum - leftSum - i){
            return i;
            }
            leftSum+=i;
        }
        return -1;
    }
};