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
       set<long long int> s;
    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
        set<long long int> :: iterator itr;
        if(s.size()>=2){
           itr=s.begin();
            itr++;
            return *itr;
        }
        return -1;
    }
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
       s.insert(root->val);
        inorder(root->right);
        
    }
};