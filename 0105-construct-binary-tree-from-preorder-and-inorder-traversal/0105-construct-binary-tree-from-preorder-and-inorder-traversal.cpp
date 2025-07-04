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
    unordered_map<int, int> inMap;
    TreeNode* buildTreeHelper(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd){
        if(preStart > preEnd || inStart > inEnd) return nullptr;

        int rootVal = preorder[preStart];
        TreeNode* root = new TreeNode(rootVal);

        int i = inMap[rootVal];
        int numsLeft = i - inStart;

        root->left = buildTreeHelper(preorder, preStart+1, preStart+numsLeft, inorder, inStart, i-1);
        root->right = buildTreeHelper(preorder, preStart + numsLeft + 1, preEnd, inorder, i+1, inEnd);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        for(int i=0;i<n;i++){
            inMap[inorder[i]] = i;
        }

        return buildTreeHelper(preorder, 0, n-1, inorder, 0, n-1);
    }
};