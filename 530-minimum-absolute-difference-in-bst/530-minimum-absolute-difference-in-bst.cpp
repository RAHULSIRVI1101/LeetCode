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
    int ans=INT_MAX;
    int previous=-1;
    int getMinimumDifference(TreeNode* root) {
        dFS(root);
        return ans;
        
    }
    void dFS(TreeNode* root){
        // Base Case - the recursion will bottom out once there are no more nodes
        if(!root){return;}
        // Recursive call on the left subtree of the root
        dFS(root->left);
        // If there is a previous value
        if(previous != -1){
            // Answer is set to the smaller of the two values:
            // 1. Itself 
            // 2. The absolute difference between the previous and current value
            ans = min(ans, std::abs(previous-root->val));
        }
        // The value of the previous node is set
        previous = root->val;
        // Recursive call on the right subtree of the root
        dFS(root->right);
    }
};