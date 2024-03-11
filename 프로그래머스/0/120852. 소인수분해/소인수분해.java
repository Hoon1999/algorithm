import java.util.Arrays;
class Solution {
    public int[] solution(int n) {
        // 변수 선언 및 초기화
        int[] answer = {};
        
        // 구현
        for(int i = 2 ; i <= n; i++) {
            if(isPrime(i)) {
                if(n % i == 0) {
                    answer = addElement(answer, i);
                }
            }
        }
        
        // 결과 리턴
        return answer;
    }
    // 소수 판별 함수.
    public boolean isPrime(int n) {
        for(int i = 2; i <= Math.sqrt(n); i++) {
            if(n % i == 0)
                return false;
        }
        return true;
    }
    // 배열에 인자 추가 함수
    public int[] addElement(int[] arr, int n) {
        arr = Arrays.copyOf(arr, arr.length + 1);
        arr[arr.length-1] = n;
        
        return arr;
    }
}