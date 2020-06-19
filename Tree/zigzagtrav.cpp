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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            queue<TreeNode *>q;
        if(!root)return {};
        q.push(root);
        int size;
        vector<vector<int>> res;
        vector<int> vect;
        int i=0;
        while(!q.empty())
        {
            size=q.size();
            while(size--)
            {
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);
                vect.push_back(q.front()->val);
                q.pop();
                //size--;   
            }
            if(i%2==0){
            res.push_back(vect);}
            else
            {
                reverse(vect.begin(),vect.end());
                res.push_back(vect);
            }
            i++;
            vect.clear();
        }
        return res;
        
    }
};
