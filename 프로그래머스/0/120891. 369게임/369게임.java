class Solution {
    public int solution(int order) {
        /*
        * int to string 변환 (1234 -> "1234")
        * 문자열의 문자를 3, 6, 9 값 중 하나인지 검사
        */
        // 변수 선언 및 초기화
        int answer = 0;
        int cnt = 0, tempInt;
        String temp;
        
        // 구현
        temp = Integer.toString(order);
        for(int i = 0; i < temp.length(); i++) {
            tempInt = temp.charAt(i) - '0';
            if(tempInt != 0 && tempInt % 3 == 0)
                cnt++;
        }
        answer = cnt;
        
        // 정답 출력
        return answer;
    }
}