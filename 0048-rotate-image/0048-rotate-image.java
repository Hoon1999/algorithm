class Solution {
    public void rotate(int[][] matrix) {
        upDownReverse(matrix);
        transpose(matrix);
    }
    public void upDownReverse(int[][] matrix) {
        int rowCount = matrix.length;
        int colCount = matrix[0].length;
        int temp = 0;
        for(int i = 0; i < rowCount/2; i++) {
            for(int j = 0; j < colCount ; j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[rowCount-1-i][j];
                matrix[rowCount-1-i][j] = temp;
            }
        }
    }
    public void transpose(int[][] matrix) {
        int temp = 0;
        for(int i = 0; i < matrix.length; i++) {
            for(int j = i+1; j < matrix[0].length; j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
}