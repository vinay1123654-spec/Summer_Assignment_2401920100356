class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sumdiagonal=0;
        for(int i=0;i<n;i++){
            sumdiagonal+=mat[i][i];
            sumdiagonal+=mat[i][n-1-i];
        }
        if(n%2==1){
            return sumdiagonal-mat[n/2][n/2];
        }
        return sumdiagonal;
    }
};
