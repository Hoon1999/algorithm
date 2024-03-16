class Solution {
    public int[] solution(int[] array) {
        // 변수 선언 및 초기화
        int[] answer = new int[2];
        
        // 구현
        answer[0] = 0; // max value
        for(int i = 0; i < array.length; i++) {
            if(answer[0] <= array[i]) {
                answer[0] = array[i];
                answer[1] = i;
            }
        }
        
        // 정답 출력
        return answer;
    }
}