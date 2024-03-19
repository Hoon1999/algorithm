class Solution {
    public int[] solution(String[] keyinput, int[] board) {
        int w = board[0]/2;
        int h = board[1]/2;
        int[] answer = {0, 0};
        
        for (String direction : keyinput) {
            switch(direction) {
                case "left":
                    --answer[0];
                    break;
                case "right":
                    ++answer[0];
                    break;
                case "up":
                    ++answer[1];
                    break;
                case "down":
                    --answer[1];
                    break;
            }
            if(answer[0] < w*-1)
                answer[0] = w*-1;
            else if(w < answer[0])
                answer[0] = w;
            if(answer[1] < h*-1)
                answer[1] = h*-1;
            else if(h < answer[1])
                answer[1] = h;
        }
        
        return answer;
    }
}