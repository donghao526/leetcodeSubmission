void addParent(vector<string> &res, string str, int leftNum, int rightNum)
{
    if (leftNum == 0 && rightNum == 0) {
        res.push_back(str);
    }
    if (rightNum > 0) {
        addParent(res, str + ")", leftNum, rightNum - 1);
    }
    if (leftNum > 0) {
        addParent(res, str + "(", leftNum - 1, rightNum + 1);
    }
}

vector<string> generateParenthesis(int n) {
    int leftNum = n;
    string str = "";
    vector<string> res;
    addParent(res, str, leftNum, 0);
    return res;
}