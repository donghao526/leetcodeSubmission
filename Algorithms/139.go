func wordBreak(s string, wordDict []string) bool {
	dictmap := make(map[string]bool)
	cache := make(map[int]bool)
	for _, dict := range wordDict {
		dictmap[dict] = true
	}
	return compose(s, dictmap, 0, cache)
}

func compose(s string, dictmap map[string]bool, pos int, cache map[int]bool) bool {
	if v, ok := cache[pos]; ok {
		return v
	}
	if _, ok := dictmap[s]; ok {
		cache[pos] = true
		return true
	}
	i := 0
	for i <= len(s) {
		if _, ok := dictmap[s[0:i]]; ok {
			if compose(s[i:len(s)], dictmap, pos+i, cache) {
				return true
			}
		}
		i = i + 1
	}
	cache[pos] = false
	return false
}
