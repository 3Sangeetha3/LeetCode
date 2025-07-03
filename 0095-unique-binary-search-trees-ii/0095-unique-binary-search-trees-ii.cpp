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
    vector<TreeNode*> buildTrees(int start, int end){
        vector<TreeNode*> res;
        if(start > end){
            res.push_back(nullptr);
            return res;
        }

        for(int i=start;i<=end;i++){
            vector<TreeNode*> leftSubTrees = buildTrees(start, i-1);
            vector<TreeNode*> rightSubTrees = buildTrees(i+1, end);

            for(TreeNode* left: leftSubTrees){
                for(TreeNode* right: rightSubTrees){
                    TreeNode* root = new TreeNode(i);
                    root->left = left;
                    root->right = right;
                    res.push_back(root);
                }
            }
        }
        return res;
    }
    vector<TreeNode*> generateTrees(int n) {
        if(n==0) return{};
        return buildTrees(1, n);
    }
};