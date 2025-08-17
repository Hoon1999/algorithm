class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        // 이거 merge sort 의 마지막 단계만 수행하면 되는거네.
        // 문제에 마지막 정렬이라고 적혀있었네 ㅋㅋ;
        // Follow up: 시간복잡도 O(m+n) -> O( nums1.length )
        int i = 0, j = 0;
        int[] temp = new int[m];
        
        for(int k = 0; k < m; k++) {
            temp[k] = nums1[k];
        }
        
        while(i < m && j < n) {
            if(temp[i] < nums2[j]) {
                nums1[i+j] = temp[i];
                i++;
            } else {
                nums1[i+j] = nums2[j];
                j++;
            }
        }
        
        if(i < m) {
            for(; i < m; i++) {
                nums1[i+j] = temp[i];
            }
        }
        else if(j < n) {
            for(; j < n; j++) {
                nums1[i+j] = nums2[j];
            }
        }
    }
    
}