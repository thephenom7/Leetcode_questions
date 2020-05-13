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
    int j=0;
    TreeNode *build(vector<int> &preorder,vector<int> &inorder,int end,int start,unordered_map<int,int>&hashmap)
    {
        if(start>end)
        {
            return nullptr;
        }
        int val=preorder[j];
        j++;
        TreeNode * node=new TreeNode(val);
        int index=(hashmap.find(val))->second;
        node->left=build(preorder,inorder,index-1,start,hashmap);
        node->right=build(preorder,inorder,end,index+1,hashmap);
        return node;
       
    }
        
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>hashmap;
        int i=0;
        for(auto x:inorder)
        {
            hashmap.insert({x,i});
            i++;
        }
        return build(preorder,inorder,preorder.size()-1,0,hashmap);
        
    }
};
