class Solution {
    public int solution(int[][] dots) {
        int answer = 0;
        int minX, maxX, minY, maxY;
        
        minX = dots[0][0];
        maxX = dots[0][0];
        minY = dots[0][1];
        maxY = dots[0][1];
        for(int i = 1; i < 4; i++) {
            if(dots[i][0] < minX)
                minX = dots[i][0];
            if(maxX < dots[i][0])
                maxX = dots[i][0];
            if(dots[i][1] < minY)
                minY = dots[i][1];
            if(maxY < dots[i][1])
                maxY = dots[i][1];
        }
        
        answer = (maxX - minX) * (maxY - minY);
        return answer;
    }
}