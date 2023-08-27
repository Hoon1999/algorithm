class Solution {
    public int[] solution(int n) {
        int size;
        if(n % 2 == 0)
            size = n/2;
        else
            size = (n+1)/2;
        int[] answer = new int[size];
        for(int i = 0; i < answer.length; i++) {
            answer[i] = i*2 + 1;
        }
        return answer;
    }
}