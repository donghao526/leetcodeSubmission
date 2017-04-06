int search(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;
        if (nums[start] < nums[end]) {
            if(target == nums[mid])
                return mid;
            else if(target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else if (target < nums[start] && target > nums[end]) {
            return -1;
        }
        else {
            if (target == nums[start]) {
                return start;
            }
            else if(target > nums[start]) {
                end--;
                continue;
            }
            if (target == nums[end]) {
                return end;
            }
            else if (target < nums[end]) {
                start++;
                continue;
            }
        }
    }
    return -1;
}