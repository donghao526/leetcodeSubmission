int lengthOfLongestSubstring(string s) {
	int maxLength = 0, head = 0, length = s.length();
	int flag[256];
	memset(&flag, -1, sizeof(int) * 256);
	for (int j = 0; j < length; j++) {
		// find the repeated char
		if (flag[(int)s[j]] >= head) {
			maxLength = maxLength > (j - head) ? maxLength : (j - head);
			head = flag[(int)s[j]] + 1;
		}
		flag[(int)s[j]] = j；
	}
	maxLength = maxLength > (length - head) ? maxLength : (length - head);
	return maxLength;
}
