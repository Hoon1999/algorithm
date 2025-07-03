class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length())
            return false;
        
        int[] cntS = new int[26];
        int[] cntT = new int[26];
        int idx = 0;
        
        for(int i = 0; i < s.length(); i++) {
            idx = s.charAt(i) - 'a';
            cntS[idx]++;
            
            idx = t.charAt(i) - 'a';
            cntT[idx]++;
            //System.out.println("t[" + i + "] = " + t.charAt(i) + " , idx = " + idx);
        }
        for(int i = 0; i < 26; i++) {
            if(cntS[i] != cntT[i])
                return false;
        }
        return true;
    }
}