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
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode *>q;
        q.push(root);
        int size,lvl=0;
        while(!q.empty())
        {
            lvl++;
            size=q.size();
            while(size--)
            {
                cout<<q.front()->val<<endl;
                if(!(q.front()->left) && !(q.front()->right))
                {return lvl;}
                if(q.front()->left)
                {
                    q.push(q.front()->left);
                }
                if(q.front()->right)
                {
                    q.push(q.front()->right);
                }
                q.pop();
            }            
        }
        return 0;
    }
};
