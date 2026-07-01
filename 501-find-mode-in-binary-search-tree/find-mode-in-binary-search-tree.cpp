class Solution {
public:
    vector<int> ans;
    TreeNode* prev = NULL;
    int count = 0, maxCount = 0;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);

        if (prev && prev->val == root->val)
            count++;
        else
            count = 1;

        if (count > maxCount) {
            maxCount = count;
            ans = {root->val};
        } 
        else if (count == maxCount) {
            ans.push_back(root->val);
        }

        prev = root;

        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;
    }
};