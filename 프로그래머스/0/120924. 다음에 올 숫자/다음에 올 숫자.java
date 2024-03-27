class Solution {
    public int solution(int[] common) {
        int d = 0, r = 0; // 공차 d, 공비 r
        int answer = 0;
        
        // 반복문 : 공차인지 검사함.
        // 반복문마다 등차수열인지 검사함.
        // 등차수열이 아니면 공비를 구하고 정답을 구해서 return 함.
        // 반복문이 끝나면(== 등차수열이면) 공차로 정답을 계산해서 return 함.
        
        d = common[1] - common[0];
        for(int i = 0; i < common.length-1; i++) {
            if(common[i+1] - common[i] == d)
                continue;
            else {
                r = common[1] / common[0];
                return common[common.length-1] * r;
            }
        }
        answer = common[common.length-1] + d;
        return answer;
    }
}