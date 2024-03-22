class Solution {
    public int solution(int[][] dots) {
        double[] temp = new double[2];
        int k = 0;
        double d = 0;
        int answer = 0;
        
        temp[0] = gradient(dots[0][0], dots[0][1], dots[1][0], dots[1][1]);
        temp[1] = gradient(dots[2][0], dots[2][1], dots[3][0], dots[3][1]);
        if(temp[0] == temp[1])
            answer = 1;
        temp[0] = gradient(dots[0][0], dots[0][1], dots[2][0], dots[2][1]);
        temp[1] = gradient(dots[1][0], dots[1][1], dots[3][0], dots[3][1]);
        if(temp[0] == temp[1])
            answer = 1;
        temp[0] = gradient(dots[0][0], dots[0][1], dots[3][0], dots[3][1]);
        temp[1] = gradient(dots[1][0], dots[1][1], dots[2][0], dots[2][1]);
        if(temp[0] == temp[1])
            answer =1 ;
        
        return answer;
    }
    public double gradient(int x1, int y1, int x2, int y2) {
        return ((double)y2 - y1)/((double)x2 - x1);
    }
}