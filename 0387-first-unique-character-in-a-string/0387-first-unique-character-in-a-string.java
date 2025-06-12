class Solution {
    public int firstUniqChar(String s) {
        int[] cnt = new int[27];
        
        for(int i = 0; i < s.length(); i++) {
            int idx = s.charAt(i) - 'a';
            cnt[idx]++;
        }
        
        for(int i = 0; i < s.length(); i++) {
            int idx = s.charAt(i) - 'a';
            if(cnt[idx] == 1)
                return i;
        }
        
        return -1;
    }
}