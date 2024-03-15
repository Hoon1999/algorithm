class Solution {
    public long solution(String numbers) {
        // 변수 선언 및 초기화
        int k = 0;
        long answer = 0;
        String temp ="";
        
        // 구현
        for(int i = 0; i < numbers.length(); i = i + k) {
            temp = numbers.substring(i, i+3);
            k = 3;
            if(transNum(temp) == -1) {
                temp = numbers.substring(i, i+4);
                k = 4;
                if(transNum(temp) == -1){
                    temp = numbers.substring(i, i+5);
                    k = 5;
                }
            }
            answer = answer * 10 + transNum(temp);
        }
        // 정답 출력
        return answer;
    }
    public long transNum(String str) {
        switch(str) {
            case "zero" : return 0;
            case "one"  : return 1;
            case "two"  : return 2;
            case "three": return 3;
            case "four" : return 4;
            case "five" : return 5;
            case "six"  : return 6;
            case "seven": return 7;
            case "eight": return 8;
            case "nine" : return 9;
            default:      return -1;
        }
    }
}