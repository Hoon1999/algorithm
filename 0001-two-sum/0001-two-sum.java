class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> mp = new HashMap<>();
        int[] ret = {0, 0};
        
        for(int i = 0 ; i < nums.length; i++) {
            if(mp.containsKey(target - nums[i])) {
                ret[0] = mp.get(target - nums[i]);
                ret[1] = i;
                break;
            }
            mp.put(nums[i], i);
        }
        
        Set<Integer> s = mp.keySet();
        return ret;
    }
}