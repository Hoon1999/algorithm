class Solution {
    public int solution(int n) {
        String temp= "";
        int answer = 0;
        
        for(int i = 1; i <= n; i++) {
            ++answer;
            while(true) {
                temp = String.valueOf(answer);
                if(answer % 3 == 0 || temp.contains("3"))
                    ++answer;
                else
                    break;
            }
        }
        return answer;
    }
}