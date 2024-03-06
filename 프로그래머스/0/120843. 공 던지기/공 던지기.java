class Solution {
    public int solution(int[] numbers, int k) {
        int answer = 0;
        answer = 1;
        
        for(int i = 1; i < k; i++) {
            if(numbers.length < ++answer)
                answer = 1;
            if(numbers.length < ++answer)
                answer = 1;
        }
        return answer;
    }
}