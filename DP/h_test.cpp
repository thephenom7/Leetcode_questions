#include<bits/stdc++.h>
using namespace std;  
vector<int>mem;
    int solv(vector<int>nums,int curr,int n)
    {
        if(curr>n)return 0;
        if(mem[curr]!=-1)return mem[curr];
        mem[curr]= max(solv(nums,curr+2,n)+nums[curr],solv(nums,curr+1,n));
        return mem[curr];
    }
    int rob(vector<int>& nums) {
        return solv(nums,0,nums.size()-1);
        
    }
int main()
{
    time_t start,end;
    time(&start);
vector<int>nums{183,219,57,193,94,233,202,154,65,240,97,234,100,249,186,66,90,238,168,128,177,235,50,81,185,165,217,207,88,80,112,78,135,62,228,247,211};
    for(int i=0;i<nums.size();i++)
    {
        mem.push_back(-1);
    }
    cout<<rob(nums)<<endl;
    time(&end);
    cout<<double(end-start)<<" s";
}