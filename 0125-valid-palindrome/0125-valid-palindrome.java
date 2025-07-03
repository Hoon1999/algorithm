class Solution {
    public boolean isPalindrome(String s) {
        String rst = "";
        
        for(int i = 0; i < s.length(); i++) {
            if('A' <= s.charAt(i) && s.charAt(i) <= 'Z'){
                rst += (char)(s.charAt(i) - 'A' + 'a');
            }
            else if('a' <= s.charAt(i) && s.charAt(i) <= 'z'){
                rst += s.charAt(i);
            }
            else if('0' <= s.charAt(i) && s.charAt(i) <= '9'){
                rst += s.charAt(i);
            }
            // else
            // 특수문자는 저장하지 않는다.
        }
        
        for(int i = 0; i < rst.length()/2 ; i++) {
            if(rst.charAt(i) != rst.charAt(rst.length() - 1 - i))
                return false;
        }
        return true;
    }
}