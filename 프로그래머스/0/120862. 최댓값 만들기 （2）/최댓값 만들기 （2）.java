import java.util.Arrays;
class Solution {
    public int solution(int[] numbers) {
        /*
        * max = 가장큰 숫자 * 두번째로 큰숫자
        * min = 가장 작은 숫자 * 두번째로 작은 숫자
        * max, min 중 큰 숫자를 정답으로 선택
        * 정렬하면 가장 큰 숫자와 작은 숫자는 바로 얻을 수 있음.
        */
        int max, min, i = numbers.length-1;
        int answer = 0;
        
        Arrays.sort(numbers);
        max = numbers[i-1] * numbers[i];
        min = numbers[0] * numbers[1];
        
        answer = min < max ? max : min;
        
        return answer;
    }
}