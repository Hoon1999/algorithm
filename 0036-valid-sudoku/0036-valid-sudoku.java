class Solution {
    public boolean isValidSudoku(char[][] board) {
        Set set = new HashSet();
        
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                char value = board[i][j];
                if(value == '.')
                    continue;
                boolean flag1, flag2, flag3;
                flag1 = set.add("row[" + i + "] : " + value); // row[i] : value 를 set 에 추가.
                flag2 = set.add("col[" + j + "] : " + value); // col[j] : value 를 set 에 추가.
                flag3 = set.add("box["+ i/3 + "][" + j/3 + "] : " + value); // box[i/3][j/3] : value 를 set 에 추가
                if(!flag1 || !flag2 || !flag3)
                    return false;
                    
            }
        }
        return true;
    }
}