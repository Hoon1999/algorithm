class Solution {
    public int solution(int num, int k) {
        /*
        * 1로 나눈 몫이 1이상이면, 몫을 다시 10으로 나누고 나머지가 k와 같은지 판단.
        * 10으로 나눈 몫이 1이상이면, 몫을 다시 10으로 나누고 나머지가 k와 같은지 판단.
        * 반복(제수가 10배씩 커짐)
        * 나누었을때 몫이 0이면 반복문을 종료.
        */
        // 변수 선언 및 초기화
        int i = 0, n = -1;
        int answer = 0;
        
        // 구현
        while(true) {
            int temp;
            temp = num / (int)Math.pow(10, i);
            if(temp < 1) 
                break;
            if(temp % 10 == k)
                n = i;
            ++i;
        }
        answer = i - n;
        if(n == -1)
            answer = -1;
        // 정답 출력
        return answer;
    }
}