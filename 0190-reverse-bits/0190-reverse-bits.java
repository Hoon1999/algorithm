class Solution {
    public int reverseBits(int n) {
        StringBuilder sb = new StringBuilder();
        int temp;
        
        while(n > 0) {
            temp = n % 2;
            n = n / 2;
            sb.append(temp);
        }
        
        while(sb.length() < 32) {
            sb.append(0);
        }
        
        return Integer.parseInt(sb.toString(), 2);
    }
}