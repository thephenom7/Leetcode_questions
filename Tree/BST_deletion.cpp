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
    TreeNode* inordersucc(TreeNode *root)
    {
        if(root->left==nullptr)
        {
            return root;
        }
        return inordersucc(root->left);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return root;
        if(root->val < key)
        {
            root->right=deleteNode(root->right,key);
        }
        else if(root->val > key)
        {
            root->left=deleteNode(root->left,key);
        }
        else
        {
            if(root->left==nullptr)
            {
                return root->right;
            }
            else if(root->right==nullptr)
            {
                return root->left;
            }
            else
            {
                TreeNode *n=inordersucc(root->right);
                root->val=n->val;
                int num=n->val;
                cout<<num;
                root->right=deleteNode(root->right,num);
                
            }
        }
        return root;//this return is for those nodes that dont satisfy the condition ie for the intermediate nodes.

        
        
    }
};
