class Solution {
    public void moveZeroes(int[] nums) {
        int idx = 0;
        int temp = 0;
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] != 0) {
                temp = nums[idx];
                nums[idx] = nums[i];
                nums[i] = temp;
                idx++;
            }
        }
    }
}