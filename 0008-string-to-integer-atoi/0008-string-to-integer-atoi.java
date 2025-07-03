class Solution {
    public int myAtoi(String s) {
        int idx = 0;
        int sign = 1;
        int startIdx = -1;
        String rst = "";
        long temp = 0;
        
        if(s.length() == 0)
            return 0;
        // Step 1
        // 앞서 나오는 공백 무시
        while(idx < s.length() && s.charAt(idx) == ' ') {
            idx++;
        }
        // Step 2
        // 부호 확인
        if(idx < s.length()) {
            if(s.charAt(idx) == '-') {
                sign = -1;
                idx++;
            }
            else if(s.charAt(idx) == '+') {
                sign = 1;
                idx++;
            }
        }
        
        // Step 3
        // 숫자를 수집한다.
        while(idx < s.length()) {
            if('0' <= s.charAt(idx) && s.charAt(idx) <= '9') {
                rst += s.charAt(idx);
                idx++;
            }
            else
                break;
        }
        
        // Step 5
        // String 을 Integer 로 변환한다.
        try {
            
            // 일단 Long 으로 변환 후 int 값 범위를 넘어가면 보정하기.
            temp = sign * Long.parseLong(rst);
            
            if(temp < -2147483648)
                temp = -2147483648;
            else if(temp > 2147483647)
                temp = 2147483647;
        } catch (NumberFormatException e) {
            // 문자열 길이가 너무 길어서 Long.parseLong 에 못넣는 경우.
            if(rst.length() > 10) {
                if(sign == -1)
                    temp = -2147483648;
                else
                    temp = 2147483647;
                
            }
            else if(rst.length() == 0)
                temp = 0;
        }
        
        return (int)temp;
        
    }
}