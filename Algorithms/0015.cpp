vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> res;
	sort(nums.begin(), nums.end());
	int length = (int)nums.size();

	for (int i = 0; i < length - 1; i++) {
		int start = i + 1;
		int end = length -1;
		while (start < end) {
			if ((nums[start] + nums[end]) < 0 - nums[i]) {
				++start;
			}
			else if ((nums[start] + nums[end]) > 0 - nums[i]) {
				--end;
			}
			else {
				vector<int> temp;
				temp.push_back(nums[i]);
				temp.push_back(nums[start]);
				temp.push_back(nums[end]);
				res.push_back(temp);
				while (start < end && nums[start] == temp[1]) start--;
				while (start < end && nums[end]   == temp[2]) end--;
			}
		}
		while ((i + 1) < length && nums[i] == nums[i+1])
			i++;
	}
	return res;
}
