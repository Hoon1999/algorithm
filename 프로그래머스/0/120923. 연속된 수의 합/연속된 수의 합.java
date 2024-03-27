class Solution {
    public int[] solution(int num, int total) {
        int start = 0, sum = 0;
        int[] answer = new int[num];
        
        while(true) {
            sum = 0;
            for(int i = 0 ; i < num; i++) {
                sum += start + i;
            }
            if(sum == total)
                break;
            else if(sum < total)
                start++;
            else if(sum > total)
                start--;
        }
        for(int i = 0; i < num; i++) {
            answer[i] = start + i;
        }
        return answer;
    }
}