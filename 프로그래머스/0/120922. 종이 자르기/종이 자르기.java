class Solution {
    public int solution(int M, int N) {
        int answer = 0;
        answer += M-1;
        answer += (1 + (M-1)) * (N-1); // (기본 1번 + 가로 가위질 횟수) * 세로 가위질 횟수
        return answer;
    }
}