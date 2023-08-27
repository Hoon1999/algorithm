class Solution {
    public int solution(int n) {
        int answer = 0;
        for(int i = 0; i < (int)Math.log10(n)+1 ; i++)
            answer += (n%Math.pow(10,i+1))/Math.pow(10, i);
        
        return answer;
    }
}