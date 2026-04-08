
var charMap = map[byte][]string{
	'2': []string{"a", "b", "c"},
	'3': []string{"d", "e", "f"},
	'4': []string{"g", "h", "i"},
	'5': []string{"j", "k", "l"},
	'6': []string{"m", "n", "o"},
	'7': []string{"p", "q", "r", "s"},
	'8': []string{"t", "u", "v"},
	'9': []string{"w", "x", "y", "z"},
}

func letterCombinations(digits string) []string {
	return compose(digits, 0)
}

func compose(digits string, i int) []string {
	if i == len(digits) {
		return []string{}
	}
	var res []string
	subStrings := compose(digits, i+1)
	for _, chars := range charMap[byte(digits[i])] {
		if len(subStrings) > 0 {
			for _, substr := range subStrings {
				res = append(res, chars+substr)
			}
		} else {
			res = append(res, chars)
		}
	}
	return res
}
