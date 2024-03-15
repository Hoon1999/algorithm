class Solution {
    public String solution(String s) {
        /*
        * 카운팅 정렬을 이용해 풀기
        */
        // 변수 선언 및 초기화
        char[] temp = new char[26];
        char[] tempS = s.toCharArray();
        String answer = "";
        
        // 구현
        // 구현1 : 카운팅 정렬
        for(int i = 0; i < s.length(); i++) {
            ++(temp[tempS[i] - 'a']);
        }
        // 구현2 : 배열에 1이 저장된 인덱스만 추려서 문자로 변환
        for(int i = 0; i < 26; i++) {
            if(temp[i] == 1) {
                answer += String.valueOf((char)(i + 'a'));
            }
        }
        // 정답 출력
        return answer;
    }
}