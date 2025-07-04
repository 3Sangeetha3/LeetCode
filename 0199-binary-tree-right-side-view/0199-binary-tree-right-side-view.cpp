/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // To get the rightMost at each level, we:
    // 1. Do preOrder DFS: root->right->left
    // 2. Do keep the track of the depth(level) during traversal.
    // 3. Only add the first node we encounter at each level(which will be the rightmost, since we go  right first )
    void DFS(TreeNode* root, int level, vector<int> &res){
        if(!root) return;

        if(level == res.size()) res.push_back(root->val);
        DFS(root->right, level+1, res);
        DFS(root->left, level+1, res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        DFS(root, 0, res);
        return res;
    }
};