#include<bits/stdc++.h>
using namespace std;
void swap(int& a,int& b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void bubble(int *arr,int n)
{
    //int flag=0;
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;

    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<*(arr+i);
    }
}
int main()
{
    int n,i,*arr;
    cout<<"Enter no elements";
    cin>>n;
    cout<<"\nElements\n";
    for(i=0;i<n;i++)
    {
        cin>>*(arr+i);
    }
    bubble(arr,n);
    

}