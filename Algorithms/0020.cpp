bool match(char a, char b) {
    switch (a) {
        case '(':
            if (b == ')')
                return true;
            else
                return false;
        case '[' :
            if (b == ']')
                return true;
            else
                return false;
        case '{' :
            if (b == '}')
                return true;
            else
                return false;
        default:
            return false;
    }
}

bool isValid(string s) {
    int length = s.length();
    stack<char> strStack;
    for (int i = 0; i < length; i++) {
        if (strStack.empty() || !match(strStack.top(), s[i])) {
            strStack.push(s[i]);
        }
        else {
            strStack.pop();
        }
    }
    return strStack.empty() ? true : false;
}