class Solution {
    public boolean isPowerOfThree(int n) {
        int max = Integer.MAX_VALUE / 3;
        int num = 1;
        while(num < max) {
            if(num == n) {
                return true;
            }
            num = num * 3;
        }
        if(num == n)
            return true;
        
        return false;
    }
}