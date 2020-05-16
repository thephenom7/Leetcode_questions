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
    bool issame(TreeNode *s,TreeNode *t)
    {
        if(s==nullptr || t==nullptr)return s==nullptr&&t==nullptr;
        if(s->val==t->val)
        {
            return issame(s->left,t->left)&&issame(s->right,t->right);
        }
        else
            return false;
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s==nullptr)
            return false;
        else if(issame(s,t))
        {
            return true;
        }
        else
            return isSubtree(s->left,t) ||isSubtree(s->right,t);
    }
};
