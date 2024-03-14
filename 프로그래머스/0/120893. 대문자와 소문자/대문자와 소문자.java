class Solution {
    public String solution(String my_string) {
        /*
        * my_string 문자열에서 문자를 하나씩 추출한다.
        * 추출한 문자가 A ~ Z 사이의 값이면 32를 더해준다.
        * 추출한 문자가 a ~ z 사이의 값이면 32를 빼준다.
        */
        
        // 변수 선언 및 초기화
        String answer = "";
        char temp = '0';
        
        // 구현
        for(int i = 0; i < my_string.length(); i++) {
            if('A' <= my_string.charAt(i) && my_string.charAt(i) <= 'Z')
                temp = (char)(my_string.charAt(i) + 32) ;
            else if('a' <= my_string.charAt(i) && my_string.charAt(i) <= 'z')
                temp = (char)(my_string.charAt(i) - 32);
            answer += temp + "";
        }
        // 정답 출력
        return answer;
    }
}