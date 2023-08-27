class Solution {
    public String solution(String my_string, int n) {
        String answer = "";
        int size = my_string.length() * n;
        char[] str = my_string.toCharArray();
        char[] temp = new char[size];
        
        for(int i = 0; i < str.length; i++) {
            for(int j = 0; j < n ;j++) {
                temp[i*n+j] = str[i];
            }
        }
        answer = new String(temp);
        return answer;
    }
}