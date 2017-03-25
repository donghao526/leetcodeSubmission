vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int> mapping;
	map<int, int>::iterator it;
	vector<int> pos;

	int len = nums.size();
	for(int i = 0; i < len; ++i){
		it = mapping.find(target - nums[i]);
		if(it != mapping.end()){
			pos.push_back(it->second);
			pos.push_back(i + 1);
			return pos;
		}
		mapping[nums[i]] = i + 1;
	}
}
