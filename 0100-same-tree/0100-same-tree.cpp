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
    // Using BFS method
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode *> qp;
        queue<TreeNode *> qq;
        qp.push(p);
        qq.push(q);

        while(!qp.empty() && !qq.empty()){
            TreeNode* n1 = qp.front(); qp.pop();
            TreeNode* n2 = qq.front(); qq.pop();

            if(!n1 && !n2) continue;
            if(!n1 || !n2 || n1->val != n2->val) return false;

            qp.push(n1->left);
            qp.push(n1->right);
            qq.push(n2->left);
            qq.push(n2->right);
        }
        return true;
    }
};