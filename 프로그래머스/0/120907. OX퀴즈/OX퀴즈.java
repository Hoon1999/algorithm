import java.util.List;
import java.util.ArrayList;

class Solution {
    public String[] solution(String[] quiz) {
        // 변수 선언 및 초기화
        int x = 0, y = 0, z = 0, temp = 0;
        int firstIdx = 0, lastIdx;
        int cnt = 0, op = 0; // cnt 는 값을 x에 넣을지 y에 넣을지 z에 넣을지 판단.
        String tempStr = "";
        List<String> arr = new ArrayList<>();
        String[] answer = {};
        
        // 구현
        for(int i = 0; i < quiz.length; i++) {
            cnt = 0; op = 0; temp = 0; firstIdx = 0;
            
            for(int j = 0; j <= quiz[i].length(); j++) {
                if(j == quiz[i].length() || quiz[i].charAt(j) == ' ') {
                    lastIdx = j;
                    tempStr = quiz[i].substring(firstIdx, lastIdx);
                    if(tempStr.equals("+"))
                        op = 1;
                    else if(tempStr.equals("-"))
                        op = -1;
                    else if(tempStr.equals("="))
                        ;
                    else {
                        if(cnt == 0) {
                            x = Integer.parseInt(tempStr);
                            ++cnt;
                        }
                        else if(cnt == 1) {
                            y = Integer.parseInt(tempStr);
                            ++cnt;
                        }
                        else {
                            z = Integer.parseInt(tempStr);
                            ++cnt;
                        }
                    }
                    firstIdx = lastIdx + 1;
                }
            }
            if(op == 1)
                temp = x + y;
            else
                temp = x - y;
            if(temp == z)
                arr.add("O");
            else
                arr.add("X");
        }
        answer = arr.toArray(answer);
        // 정답 출력
        return answer;
    }
}