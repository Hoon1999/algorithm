class Solution {
    public int solution(int[][] board) {
        /*
        * board 와 동일한 크기의 배열을 만듬.
        * 지뢰와 인접한 지역의 index를 구하고 복사된 board의 값을 1로 만듬
        * 복사된 board 에서 0의 갯수를 구함.
        */
        int[][] copiedBoard = new int[board.length][board.length];
        int answer = 0;
        
        // 로직
        for(int i = 0; i < board.length; ++i) {
            for(int j = 0; j < board.length; ++j) {
                // if(지뢰를 찾으면)
                if(board[i][j] == 1) {
                    for(int n = i-1; n <= i+1; n++)
                        for(int m = j-1; m <= j+1; m++) {
                            if(n < 0 || board.length <= n)
                                continue;
                            if(m < 0 || board.length <= m)
                                continue;
                            copiedBoard[n][m] = 1;
                        }
                }
            }
        }
        for(int i = 0; i < copiedBoard.length; i++){
            for(int j = 0; j < copiedBoard.length; j++) {
                if(copiedBoard[i][j] == 0)
                    answer++;
            }
        }
        // 정답 출력
        
        return answer;
    }
}