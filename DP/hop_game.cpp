#include<bits/stdc++.h>
using namespace std;
vector<int> mem;

int maximum(int i,int j,int k)
{
  if(i > j && i > k)
  {
    return i;
  }
  else if (j > k)
  {
    return j;
  }
  else
  {
    return k;
  }
}
int hop(vector<int>nums,int curr,int n,int flag)
{
    cout<<endl<<"curr = "<<curr<<endl;
    if(n<=curr)
    {return 0;}
    if(mem[curr]!=-1)return mem[curr];
    if(flag==1)
    {      if((n-curr)>=2)
        {
                mem[curr]=max(hop(nums,curr+1,n,1)+nums[curr+1],hop(nums,curr+2,n,1)+2*nums[curr+2]);
                return mem[curr];
        }
            mem[curr]=hop(nums,curr+1,n,1)+nums[curr+1];
            return mem[curr];
        
    }
    else
    {
        if(n-curr>=3){
          cout<<" INN";
        mem[curr]= maximum(hop(nums,curr+1,n,0)+nums[curr+1],hop(nums,curr+2,n,0)+2*nums[curr+2],hop(nums,curr+3,n,1)+3*nums[curr+3]);
        return mem[curr];
        }
        else if(n-curr>=2)
        {
                mem[curr]= max(hop(nums,curr+1,n,0)+nums[curr+1],hop(nums,curr+2,n,0)+2*nums[curr+2]);
                return mem[curr];
  
        }

        mem[curr]=hop(nums,curr+1,n,0)+nums[curr+1];
        return mem[curr];

  
        
    }
    cout<<"OUT";
    
}
int main()
{
    vector<int>nums{4,5,6,7,4,5};
    nums.insert(nums.begin(),0);
    for(int i=0;i<nums.size();i++)
    {
      nums.push_back(-1);
    }
    cout<<"s = "<<nums.size()<<endl;
    cout<<"answer = "<<hop(nums,0,nums.size()-1,0);
}