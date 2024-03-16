class Solution {
    public int solution(String my_string) {
        /*
        * 덧셈 뺄셈으로만 이루어져 있으면 앞에서부터 순서대로 계산하면 됨
        * 잘못된 수식이 없으니 무조건 숫자부터 시작한다는 의미.
        */
        // 변수 선언 및 초기화
        int firstIdx = 0, lastIdx = 0;
        String op = "+", temp = "";
        int answer = 0;
        
        // 구현
        for(int i = 0; i <= my_string.length(); i++) {
            if(my_string.length()==i || my_string.charAt(i) == ' ') {
                lastIdx = i; // last index 는 i - 1 이 맞지만 substring 에 사용할 것이므로 i를 대입.
                temp = my_string.substring(firstIdx, lastIdx);
                if(temp.equals("+") || temp.equals("-"))
                    op = temp;
                else // temp 가 숫자인 경우
                {
                    if(op.equals("+"))
                        answer = answer + Integer.parseInt(temp);
                    else
                        answer = answer - Integer.parseInt(temp);
                }
                firstIdx = i + 1; // i 는 공백을 가리키는 index 이므로 i+1 부터 시작
            }
        }
        // 정답 출력
        return answer;
    }
}