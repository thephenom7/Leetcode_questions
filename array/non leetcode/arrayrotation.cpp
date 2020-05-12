#include<bits/stdc++.h>
using namespace std;
void leftrotation(vector<int>&arr)
{
    int temp=arr[0];
    int i;
    for(i=0;i<arr.size()-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
}
int main()
{
    vector <int> arr;
    cout<<"Enter array"<<endl;
    int num=0;
    while(true)
    {
        cin>>num;
        if(num==-1)
            break;
        arr.push_back(num);
    }
    int c;
    cout<<"no of elements to be rotated "<<endl;
    cin>>c;
    cout<<endl<<"Before rotation "<<endl;

    for(auto j=arr.begin();j!=arr.end();j++){
            cout<<*j<<" ";
        }
    for(int k=0;k<c;k++)
    {
        leftrotation(arr);
    }
        cout<<endl<<"After rotation "<<endl;
        for(auto j=arr.begin();j!=arr.end();j++){
            cout<<*j<<" ";
        }
}