class Solution {
    public int solution(int n) {
        int answer = 0;
        int f; // factors
        for(int i = 1 ; i <= n ; i++) {
            int count = 0;
            for(f = 1; f <= i/2; f++) {
                if(i % f == 0)
                    ++count;
            }
            if(count >= 2)
                ++answer;
        }
        return answer;
    }
}