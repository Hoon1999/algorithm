class Solution {
    public int solution(int n) {
        int answer = 1;
        int i;
        for(i = 1; answer * i <= n; i++) {
            answer = answer *i;
        }
        answer = --i;
        return answer;
    }
}