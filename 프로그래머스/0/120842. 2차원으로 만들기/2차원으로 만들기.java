class Solution {
    public int[][] solution(int[] num_list, int n) {
        int[][] answer = {};
        int row = num_list.length/n;
        int col = n;
        answer = new int[row][col];
        
        if(num_list.length == 0) {
            return answer;
        }
        
        for(int i = 0; i < row; i++) {
            for(int j = 0 ; j < col; j++) {
                answer[i][j] = num_list[i*n+j];
            }
        }
        return answer;
    }
}