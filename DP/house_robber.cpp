class Solution {
public:
    vector<int>mem;
    int solv(vector<int>nums,int curr,int n)
    {
        if(curr>n)return 0;
        if(mem[curr]!=-1)return mem[curr];
        mem[curr]=max(solv(nums,curr+2,n)+nums[curr],solv(nums,curr+1,n));
        return mem[curr];
    }
    int rob(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            mem.push_back(-1);
        return solv(nums,0,nums.size()-1);
        
    }
};
