    public int searchInsert(int[] nums, int target) {
        int index = 0;
        for (int i = 0; i < nums.length; i++) {
            if (target <= nums[i]) {
                index = i;
                break;
            }
            if (i == nums.length -1) {
                index = nums.length;
            }
        }
        return index;
    }