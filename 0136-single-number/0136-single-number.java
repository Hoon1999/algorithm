class Solution {
    public int singleNumber(int[] nums) {
        Arrays.sort(nums);
        int result = 999999;
        for(int i = 0; i < nums.length-1;) {
            if(nums[i] == nums[i+1]) {
                i += 2;
            } else {
                result = nums[i];
                break;
            }
        }
        if(result == 999999) {
            result = nums[nums.length-1];
        }

        return result;
    }
}