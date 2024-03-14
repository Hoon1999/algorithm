class Solution {
    public String solution(String cipher, int code) {
        /*
        * cipher 의 인덱스가 code-1, code*2 -1, ... 인 문자들을
        * 연결하면 정답
        */
        
        // 변수 선언 및 초기화
        String answer = "";
        
        
        // 구현
        for(int i = code-1; i < cipher.length(); i+=code) {
            answer += cipher.charAt(i);
        }
        
        // 정답 출력
        return answer;
    }
}