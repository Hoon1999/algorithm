class Solution {
    public String solution(String my_string) {
        /*
        * my_string 문자열의 각 문자를 차례대로 선택
        * 선택한 문자가 answer 문자열에 존재하는지 검사
        * 존재하지 않으면 answer 문자열 뒤에 삽입
        */
        
        // 변수 선언 및 초기화
        String answer = "";
        char temp = '0';
        boolean b = true;
        
        // 구현1 my_string 문자열의 각 문자를 차례대로 선택
        for(int i = 0; i < my_string.length(); i++) {
            temp = my_string.charAt(i);
            b = true;
            // 구현2 선택한 문자가 answer 문자열에 존재하는지 검사
            for(int j = 0; j < answer.length(); j++) {
                if(answer.charAt(j) == temp) {
                    b = false;
                    break;
                }
            }
            if(b) {
                answer += temp;
            }
        }
        
        // 정답 출력
        return answer;
    }
}