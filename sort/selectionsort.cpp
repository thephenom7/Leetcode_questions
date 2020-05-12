 #include<iostream>
 using namespace std;
void swap(int& a,int& b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void selection(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
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
    selection(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<*(arr+i);
    }

}