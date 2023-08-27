class Solution {
    public String solution(String rsp) {
        String answer = "";
        char[] str = new char[rsp.length()];
        for(int i = 0; i<rsp.length(); i++){
            if(rsp.charAt(i) == '2')
                str[i] = '0';
            else if(rsp.charAt(i) == '0')
                str[i] = '5';
            else
                str[i] = '2';
        }
        answer = new String(str);
        return answer;
    }
}