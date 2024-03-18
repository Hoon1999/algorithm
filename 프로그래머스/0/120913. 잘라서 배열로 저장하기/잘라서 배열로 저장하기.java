class Solution {
    public String[] solution(String my_str, int n) {
        int idx = 0;
        String[] answer = {};
        
        if(my_str.length() % n == 0)
            answer = new String[my_str.length()/n];
        else
            answer = new String[my_str.length()/n+1];
        
        for(int i = 0; i < my_str.length(); i += n) {
            if(my_str.length() < i+n)
                answer[idx] = my_str.substring(i, my_str.length());
            else
                answer[idx] = my_str.substring(i, i+n);
            ++idx;
        }
        return answer;
    }
}