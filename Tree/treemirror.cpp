/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool ismirror(TreeNode *t1,TreeNode *t2)
    {
        if(t1==NULL && t2==NULL)return 1;
        if(t1==NULL || t2==NULL)return 0;
        return (t1->val==t2->val)&&ismirror(t1->left,t2->right)&&ismirror(t1->right,t2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return(ismirror(root,root));
        
    }

};