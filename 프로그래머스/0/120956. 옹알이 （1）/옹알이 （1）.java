class Solution {
    public int solution(String[] babbling) {
        String temp = "";
        int answer = 0;
        
        for(int i = 0; i < babbling.length; ++i) {
            temp = babbling[i];
            temp = checkWord(temp);
            if(temp.length() == 0) 
                answer++;
        }
        return answer;
    }
    public String checkWord(String str) {
        str = str.replace("aya", "xxx");
        str = str.replace("ye", "xx");
        str = str.replace("woo", "xxx");
        str = str.replace("ma", "xx");
        str = str.replace("x", "");
        return str;
    }
}