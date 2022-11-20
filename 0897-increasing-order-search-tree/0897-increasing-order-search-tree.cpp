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
    vector<int> inOrder;
    TreeNode* increasingBST(TreeNode* root) {
        inorderTraversal(root);
        TreeNode* temp=new TreeNode(inOrder[0]);
        TreeNode* newRoot=temp;
        for(int i=1;i<inOrder.size();i++){
            TreeNode* curr=new TreeNode(inOrder[i]);
            temp->right=curr;
            temp->left=NULL;
            temp=curr;
        }
        return newRoot;
    }
    void inorderTraversal(TreeNode* root){
        if(root==NULL) return ;
        inorderTraversal(root->left);
        inOrder.push_back(root->val);
        inorderTraversal(root->right);
        
    }
};