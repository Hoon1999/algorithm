import java.util.Arrays;
class Solution {
    public int[] solution(int[] numlist, int n) {
        int leftIdx = 0, rightIdx = 0;
        int[] answer = new int[numlist.length];
        
        Arrays.sort(numlist);
        for(int i = 0; i < numlist.length; ++i) {
            if(n <= numlist[0]) {
                leftIdx = 0;
                rightIdx = 1;
            }
            if(numlist[i] < n) {
                leftIdx = i;
                rightIdx = i+1;
            }
        }
        for(int i = 0; i < answer.length; ++i) {
            if(leftIdx == -1 && rightIdx == answer.length)
                break;
            else if(leftIdx == -1)
                answer[i] = numlist[rightIdx++];
            else if(rightIdx == answer.length)
                answer[i] = numlist[leftIdx--];
            else {
                int l = Math.abs(n - numlist[leftIdx]);
                int r = Math.abs(n - numlist[rightIdx]);
                answer[i] = l >= r ? numlist[rightIdx++] : numlist[leftIdx--];
            }
        }
        return answer;
    }
}