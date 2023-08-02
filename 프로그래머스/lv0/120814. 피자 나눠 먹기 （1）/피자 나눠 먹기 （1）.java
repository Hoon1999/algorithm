class Solution {
    public int solution(int n) {
        /*
        피자 하나당 7 조각이다.
        7명 = 피자 1판
        1명 = 파자 1판
        15명 = 피자 3판
        
        n명이면 피자는 몇 판 필요한가?
        */
        int answer = 0;
        answer = n/7;
        if(n%7 != 0)
            answer++;
        return answer;
    }
}