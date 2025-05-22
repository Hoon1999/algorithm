import java.util.*;

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        int[] rt;
        List<Integer> ls = new ArrayList<>();
        
        for(int i = 0; i < nums1.length; i++) {
            int temp = nums1[i];
            for(int j = 0; j < nums2.length; j++)
                if(temp == nums2[j]) {
                    ls.add(temp);
                    nums2[j] = -1;
                    break;
                }
        }
        Integer[] tempArr = ls.toArray(new Integer[0]);
        rt = new int[tempArr.length];
        for(int i = 0; i < tempArr.length; i++) {
            rt[i] = tempArr[i];
        }
        
        return rt;
    }
}