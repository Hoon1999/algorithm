class Solution {
    public String solution(String polynomial) {
        int coefficient = 0, constant = 0;
        int firstIdx = 0, lastIdx = 0;
        String temp = "";
        String answer = "";
        
        for(int i = 0; i <= polynomial.length(); i++){
            lastIdx = i;
            if(i == polynomial.length() || polynomial.charAt(i) == ' '){
                temp = polynomial.substring(firstIdx, lastIdx); //temp 에는 항 또는 + 가 저장됨
                firstIdx = lastIdx + 1;
                if(temp.charAt(0) == '+') // + 인 경우 패스
                    ;
                else if(temp.charAt(temp.length()-1) == 'x') {
                    temp = temp.substring(0, temp.length());
                    if(temp.equals("x"))
                        coefficient += 1; 
                    else 
                        coefficient += Integer.parseInt(temp.substring(0, temp.length()-1));
                    
                }
                else {
                    constant += Integer.parseInt(temp.substring(0, temp.length()));
                }
            }
        }
        if(coefficient == 1)
            answer += "x";
        else if(coefficient != 0)
            answer += coefficient + "x";
        
        if(coefficient != 0 && constant !=0)
            answer += " + " + constant;
        else if(constant != 0)
            answer += "" + constant;
        return answer;
    }
}