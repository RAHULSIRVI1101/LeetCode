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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return false;
        bool res=false;
        if(root->val == subRoot->val){
            res=compare(root,subRoot);
        }
        return res?res:isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
    bool compare(TreeNode* t1, TreeNode* t2){
        if(t1==NULL && t2==NULL) return true;
        if(t1==NULL || t2==NULL) return false;
        if(t1->val!=t2->val) return false;
        return compare(t1->left,t2->left) && compare(t1->right,t2->right);
    }
};