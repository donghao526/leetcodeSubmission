func productExceptSelf(nums []int) []int {
	before := make([]int, len(nums))
	after := make([]int, len(nums))

	before[0] = 1
	after[len(nums)-1] = 1

	n := len(nums)
	for i := range nums {
		if i >= 1 {
			before[i] = nums[i-1] * before[i-1]
		}
		if i < n-1 {
			after[n-i-2] = nums[n-i-1] * after[n-i-1]
		}
	}

	var result []int
	for i := range nums {
		result = append(result, before[i]*after[i])
	}
	return result
}