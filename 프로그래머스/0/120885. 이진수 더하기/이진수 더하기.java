class Solution {
    public String solution(String bin1, String bin2) {
        String answer = "";
        int temp = binToDec(bin1) + binToDec(bin2);
        
        answer = decToBin(temp);
        return answer;
    }
    public int binToDec(String num) {
        int dec = 0;
        for(int i = 0; i < num.length(); i++) {
            dec += (num.charAt(num.length()-1-i) - '0') * (int)Math.pow(2, i);
        }
        return dec;
    }
    public String decToBin(int num) {
        String bin = "";
        if(num == 0)
            bin += "0";
        while(num >= 1) {
            bin += String.valueOf(num%2);
            num /= 2;
        }
        return strReverse(bin);
    }
    public String strReverse(String str) {
        String temp = "";
        for(int i = str.length()-1; 0 <= i; --i) {
            temp += str.charAt(i) + "";
        }
        return temp;
    }
}