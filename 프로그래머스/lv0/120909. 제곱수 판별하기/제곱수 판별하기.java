class Solution {
    public int solution(int n) {
        int answer = 0;
        int root = 0;
        root = (int)Math.sqrt(n);
        if(n == Math.pow(root, 2))
            answer = 1;
        else
            answer = 2;
        return answer;
    }
}