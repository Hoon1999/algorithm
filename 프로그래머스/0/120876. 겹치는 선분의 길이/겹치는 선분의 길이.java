class Solution {
    public int solution(int[][] lines) {
        /*
        * int[201] 배열을 만듬
        * -100 ~ 100 을 0 ~ 200으로 매핑
        * [-1, 4] 인 선이 있으면 a[99] ~ a[104] 의 값을 1로 만듬
        * 모든 선에 대해서 반복
        * 반복이 끝나면 배열의 1인 값들을 모두 더함
        * 더한 값을 정답으로 출력
        */
        int[] intersection = new int[201];
        int answer = 0;
        
        for(int[] line : lines) {
            for(int i = line[0]; i < line[1]; ++i) {
                intersection[i+100] += 1;
            }
        }
        for(int i = 0; i < 201; ++i) {
            if(intersection[i] >= 2)
                ++answer;
        }
        return answer;
    }
}