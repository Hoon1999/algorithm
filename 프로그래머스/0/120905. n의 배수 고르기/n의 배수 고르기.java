import java.util.List;
import java.util.ArrayList;
class Solution {
    public int[] solution(int n, int[] numlist) {
        // 변수 선언 및 초기화
        List<Integer> arr = new ArrayList<>();
        int[] answer = {};
        
        // 구현
        for(int i = 0; i < numlist.length; i++) {
            if(numlist[i] % n == 0)
                arr.add(numlist[i]);
        }
        answer = arr.stream()
            .mapToInt(i -> i)
            .toArray();
        
        // 정답 출력
        return answer;
    }
}