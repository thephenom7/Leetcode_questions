class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int,vector <int>,greater<int>>q;
    for(auto x:nums)
    {
        if(q.empty())
        { q.push(x);}
        else{
        if(q.top()<x)
        {
        q.push(x);}
        }
        if(q.size()>k)
        {
            q.pop();
        }
    }
    return q.top();
    }
};
