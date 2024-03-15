class Solution {
    public String solution(String my_string, int num1, int num2) {
        // 변수 선언 및 초기화
        String answer = "";
        
        // 구현
        // num1 은 num2 보다 항상 작게 설정
        if(num2 < num1) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        answer += my_string.substring(0, num1);
        answer += my_string.substring(num2, num2+1);
        answer += my_string.substring(num1+1, num2);
        answer += my_string.substring(num1, num1+1);
        answer += my_string.substring(num2+1, my_string.length());
        
        // 정답 출력
        return answer;
    }
}