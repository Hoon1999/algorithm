import java.util.Arrays;
class Solution {
    public String solution(String my_string) {
        char[] temp;
        String answer = "";
        
        // 구현
        my_string = my_string.toLowerCase(); // 소문자로 변경
        temp = my_string.toCharArray();
        Arrays.sort(temp);
        answer = String.valueOf(temp);
        // 정답 출력
        return answer;
    }
}