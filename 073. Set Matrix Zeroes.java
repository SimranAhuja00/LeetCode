class Solution {
    public void setZeroes(int[][] matrix) 
    {
        int m = matrix.length;
        int n = matrix[0].length;
        int i,j;
        boolean[] zeroRows = new boolean[m];
        boolean[] zeroCols = new boolean[n];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrix[i][j]==0){
                    zeroRows[i] = true;
                    zeroCols[j] = true;
                }
            }
        }

        for(i=0;i<m;i++){
            if (zeroRows[i]) {
                for (j = 0; j < n; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        for (j = 0; j < n; j++) {
            if (zeroCols[j]) {
                for (i = 0; i < m; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}
