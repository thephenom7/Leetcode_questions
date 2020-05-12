#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s;
    int arr[10]={1,55,62,45,74,12,35};

    s.push(arr[0]);
    for(int i=1;i<7;i++)
    {
        while(!s.empty() && s.top()<arr[i])
        {
            cout<<"NGE of "<<s.top()<<" is "<<arr[i]<<endl;
            s.pop();
        }

        s.push(arr[i]);
    }
    while(!s.empty())
    {
            cout<<"NGE of "<<s.top()<<" is "<<-1<<endl;
            s.pop();        
    }
}