import java.util.Arrays;
class Solution {
    public int[] solution(String my_string) {
        /*
        * my string 에서 0 ~ 9 사이 값만 추출하여
        * 새 배열에 저장.
        * 정렬 후 리턴
        */
        // 변수 선언 및 초기화
        int[] answer = {};
        
        // 구현
        // 구현1. 0 ~ 9 추출
        for(int i = 0; i < my_string.length(); i++) {
            if('0' <= my_string.charAt(i) && my_string.charAt(i) <= '9') {
                int a = my_string.charAt(i) - '0';
                answer = addElement(answer, a);
            }
        }
        // 구현2. 정렬
        Arrays.sort(answer);
        
        // 정답 출력
        return answer;
    }
    public int[] addElement(int[] arr, int i) {
        // {1, 2, 3} 를 copyOf(배열명, 5) 하면 {1, 2, 3, 0, 0} 을 리턴함.
        arr = Arrays.copyOf(arr, arr.length + 1);
        arr[arr.length-1] = i;
        return arr;
    }
}