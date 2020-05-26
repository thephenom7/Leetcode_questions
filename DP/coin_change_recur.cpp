#include<bits/stdc++.h>
using namespace std::chrono; 
int cutRod(vector<int> prices, int sum,int curr)
{
 if(sum==0)
 {
   return 0;
   }
   else if(sum<0 ||curr>prices.size())return INT_MIN;
   cout<<curr<<endl;
  return max(cutRod(prices,sum-curr,curr)+prices[curr-1],cutRod(prices,sum,curr+1));
  
} 

/* Driver program to test above functions */
int main() 
{ 
  auto start=high_resolution_clock::now();
	vector<int> arr{3,5,10,11,15}; 
	printf("Maximum Obtainable Value is %dn", cutRod(arr,arr.size(),1)); 
  auto end=high_resolution_clock::now();
  auto duration=duration_cast<microseconds>(end-start);
  cout<<endl<<duration.count();
} 
