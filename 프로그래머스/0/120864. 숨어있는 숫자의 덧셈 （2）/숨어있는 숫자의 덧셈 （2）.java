class Solution {
    public int solution(String my_string) {
        /*
        * for
        * > if(문자열에서 숫자인지 문자인지 판단.)
        * >> 숫자를 임시 변수에 저장.
        * > else
        * >> 문자가 나오면 임시변수에저장 된 숫자를 정답 변수에 누적.
        */
        
        // 변수 선언 및 초기화
        String temp = "";
        int answer = 0;
        
        // 로직 구현
        for(int i = 0; i < my_string.length(); ++i) {
            if(0 <= my_string.charAt(i) && my_string.charAt(i) <= '9')
                temp += my_string.charAt(i) + "";
            else {
                if(temp.equals(""));
                else {
                    answer += Integer.parseInt(temp);
                    temp = "";
                }
            }
        }
        if(temp.equals(""));
                else {
                    answer += Integer.parseInt(temp);
                    temp = "";
                }
        
        // 정답 출력
        return answer;
    }
}