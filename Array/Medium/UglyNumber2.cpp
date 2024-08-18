class Solution {
public:
    int nthUglyNumber(int n) {
     vector<int> answer(n);
     answer[0]=1;
     int p1=0;
     int p2=0;
     int p3=0;

     for (int i=1;i<n;i++){
         int twoMul = answer[p1] * 2;
         int threeMul = answer[p2] * 3;
         int fiveMul = answer[p3] * 5;

        answer[i]= min(twoMul, min(threeMul,fiveMul));

            if(answer[i] == twoMul) p1++;
            if(answer[i] == threeMul) p2++;
            if(answer[i] ==  fiveMul) p3++;       
     }
     return answer[n-1];
    }
};