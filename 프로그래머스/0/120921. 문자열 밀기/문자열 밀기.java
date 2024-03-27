class Solution {
    public int solution(String A, String B) {
        int i = 0;
        int answer = 0;
        
        for(i = 0; i < B.length(); i++) {
            if(A.equals(B))
                break;
            A = strRightShift(A);
            ++answer;
        }
        if(i == B.length())
            return -1;
        
        return answer;
    }
    public String strRightShift(String str) {
        String temp ="" ;
        temp += str.substring(str.length()-1, str.length());
        temp += str.substring(0, str.length()-1);
        return temp;
    }
}