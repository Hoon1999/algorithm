class Solution {
    public int solution(int i, int j, int k) {
        String strK = String.valueOf(k);
        String temp = "";
        int answer = 0;
        for(; i <= j; i++) {
            temp = String.valueOf(i);
            for(int n = 0; n < temp.length(); n++) {
                if(temp.charAt(n) == k + '0')
                    ++answer;
            }
            System.out.println();
        }
        return answer;
    }
}