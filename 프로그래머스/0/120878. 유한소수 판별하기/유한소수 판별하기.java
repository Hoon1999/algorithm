class Solution {
    public int solution(int a, int b) {
        /*
        * 1. a/b 를 기약분수 형태로 바꾼다.
        * 2. 분모를 2와 5로 나누어 떨어 지지않을 때 까지 2와 5로 나눈다.
        * 3. 반복문이 종료되었을 때 분모가 1이 아니면 무한소수이다.
        */
        int answer = 1;
        
        // 로직 구현
        b = b / gcd(a, b);
        while(true) {
            if(b % 2 == 0)
                b = b / 2;
            else if(b % 5 == 0)
                b = b / 5;
            else
                break;
        }
        if(b != 1)
            answer = 2;
        
        return answer;
    }
    public int gcd(int a, int b) {
        if(b == 0)
            return a;
        return gcd(b, a % b);
    }
}