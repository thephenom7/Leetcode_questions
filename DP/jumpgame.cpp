class Solution {
public:
    vector<int>mem;
    int solv(int i,vector<int>&nums,int n)
    {
        if(i>n)return INT_MAX;
        if(n==i)return 0;
        if(mem[i]!=-1)return mem[i];
        int steps=nums[i];
        int minval=INT_MAX-1;
        for(int j=1;j<=steps;j++)
        {
            minval=min(minval,solv(i+j,nums,n));
        }
        mem[i]=minval +1;
        return mem[i];
    }
    int jump(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        { mem.push_back(-1);}
        return solv(0,nums,nums.size()-1);
        
        
    }
};
