    public int removeDuplicates(int[] nums) {
        if (nums.length < 2)
            return nums.length;
        else {
            int i = 1;
            for(int j = 0; j < nums.length - 1; j++) {
                if (nums[j] != nums[j+1]) {
                    nums[i] = nums[j+1];
                    ++i;
                }
            }
            return i;
        }
    }