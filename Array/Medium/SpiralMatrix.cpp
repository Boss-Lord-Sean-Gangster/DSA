class Solution {
public:
    void spiral(vector<vector<int>>& matrix, int nr, int nc, vector<int>& result, int r, int c, int dr, int dc ){
        if(nr==0 || nc==0){
            return;
        }
        for(int i=0;i<nc;i++){
            r+=dr ;
            c+=dc;
            result.push_back(matrix[r][c]);
        }
        spiral(matrix,nc,nr-1,result,r,c,dc,-dr);
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;
        spiral(matrix, matrix.size(), matrix[0].size(), result, 0, -1, 0, 1);
        return result;
    }
};