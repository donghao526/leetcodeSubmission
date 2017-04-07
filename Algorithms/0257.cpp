void searchA(TreeNode* root, vector<string> &path, string &temp) {
    if (!root)
        return;
    string backup = temp;
    if (!root->left && !root->right) {
        temp += (temp == "" ? to_string(root->val) : "->" + to_string(root->val));
        path.push_back(temp);
    }
    else {
        temp += (temp == "" ? to_string(root->val) : "->" + to_string(root->val));
        searchA(root->left, path, temp);
        searchA(root->right, path, temp);
    }
    temp = backup;
}

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> path;
    string temp = "";
    searchA(root, path, temp);
    return path;
}