class Solution {
    public int solution(int[] sides) {
        /*
        * 한 side 가 1 일 때, 삼각형의 조건을 만족하면 정답 카운트를 증가.
        * 한 side 가 2 일 때, 삼각형의 조건을 만족하면 정답 카운트를 증가.
        * 반복.
        * 중단 조건(한 변의 길이가 제시된 두 변의 길이의 합고 같아짐)
        */
        int side = 1, max = 0, sum = 0;
        int answer = 0;
        
        while(side < sides[0] + sides[1]) {
            max = 0; sum = 0;
            
            if(sides[0] < sides[1]) {
                max = sides[1];
                sum += sides[0];
            } else {
                max = sides[0];
                sum += sides[1];
            }
            if(side < max) {
                max = max;
                sum += side;
            }else {
                max = side;
                sum += max;
            }
            
            if(max < sum)
                ++answer;
            ++side;
        }
        return answer;
    }
}