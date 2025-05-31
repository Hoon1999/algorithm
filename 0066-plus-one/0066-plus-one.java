class Solution {
    public int[] plusOne(int[] digits) {
        ArrayList<Integer> list = new ArrayList<>();
        ArrayList<Integer> list2 = new ArrayList<>();
        int[] result;
        int n = 1;
        
        for(int i = digits.length-1; i >= 0; i--) {
            list.add(digits[i]);
        }
        
        for(int v : list) {
            if(n == 1) {
                v++;
                n--;
            }
            if(v == 10) {
                v = 0;
                n = 1;
            }
            list2.add(v);
        }
        
        if(n == 1) {
            list2.add(1);
        }
        
        result = new int[list2.size()];
        n = list2.size();
        for(int i = 0; i < n; i++) {
            result[i] = list2.get(n-1-i);
        }
        
        return result;
    }
}