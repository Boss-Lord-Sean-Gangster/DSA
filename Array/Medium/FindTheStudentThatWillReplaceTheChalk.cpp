class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
      long long ChalkNeeded = 0;
      for(int i :chalk){
        ChalkNeeded+=i;
      }
      int remainingChalk = k % ChalkNeeded;
      int n = chalk.size();
      for(int i=0;i<n;i++){
        if(chalk[i]>remainingChalk){
            return i;
        }
        remainingChalk-= chalk[i];
      }
      return 0;
       
    }
};