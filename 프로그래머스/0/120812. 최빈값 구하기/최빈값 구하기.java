import java.util.Arrays;

class Solution {
    public int solution(int[] array) {
        int answer = 0;
        int max = 0;
        Arrays.sort(array);
        int[] countingArr = new int[array[array.length-1]+1];
        for(int i = 0; i < array.length; i++) {
            countingArr[array[i]]++;
        }
        
        for(int i = 0; i < countingArr.length; i++) {
            if ( countingArr[i] > max) {
                max = countingArr[i];
                answer = i;
            }
            else if(countingArr[i] == max) {
                answer = -1;
            }
        }
        return answer;
    }
}