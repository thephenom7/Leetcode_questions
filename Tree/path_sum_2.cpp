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
    vector<vector<int>> paths;
    void calc(TreeNode *root,int sum,vector<int> vect)
    {
        if(!root)return;
        vect.push_back(root->val);
        if(sum==root->val && root->left==nullptr && root->right==nullptr)
        {
            paths.push_back(vect);
            return;
        }
        vector<int> v (vect.begin(),vect.end());
        calc(root->left,sum-root->val,v);
        calc(root->right,sum-root->val,v);        
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> vect;
        calc(root,sum,vect);
        return paths;
        
    }//To use go backward in a tree use hashmaps storing key as parent
};
