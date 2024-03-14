import java.util.Arrays;
class Solution {
    public int solution(int[] array, int n) {
        // 변수 선언 및 초기화
        int answer = 0;
        int e = 0, k = 0;
        
        // 구현
        Arrays.sort(array);
        for(int i = 0 ; i < array.length; i++) {
            k = i;
            if(n < array[i])
                break;
            
        }
        answer = array[k];
        e = Math.abs(array[k] - n);
        if(0 < k)
            if(Math.abs(array[k-1] - n) <= e)
                answer = array[k-1];
        
        // 정답 출력
        return answer;
    }
}