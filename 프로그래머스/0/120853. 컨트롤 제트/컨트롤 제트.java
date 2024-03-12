import java.util.Arrays;

class Solution {
    public int solution(String s) {
        /*
        * 공백을 만나기 전까지의 문자열을 current_temp 변수에 저장
        * current_temp 의 값이 'Z' 가 아니면 privious_temp 값을
        * sum 에 더함. 'Z' 이면 수행하지 않음.
        */
        // 변수 선언 및 초기화
        int answer = 0;
        String currentTemp="0", priviousTemp = "0";
        String[] temp;
        
        // 구현
        temp = s.split(" ");
        for(int i = 0; i < temp.length; i++) {
            if(temp[i].equals("Z") == false) {
                answer += Integer.parseInt(temp[i]);
                priviousTemp = temp[i];
            }
            else {
                answer -= Integer.parseInt(priviousTemp);
            }
        }
        // 정답출력
        return answer;
    }
}