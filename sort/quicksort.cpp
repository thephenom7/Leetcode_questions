 #include<iostream>
 using namespace std;
 void swap(int *a,int *b)
 {
    // cout<<"\n"<<*a<<*b;
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
     //cout<<"\n after  "<<*a<<*b;
      }
int partition(int *arr,int l,int u)
{
    int pivot=arr[u];
    int i=l-1,j;
    for(j=l;j<u;j++)
    {
        if(arr[j]<arr[u])
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[u],&arr[i+1]);
    return(i+1);
}
void quicksort(int *arr,int l,int u)
{
    if(l<u)
    {
        int pos=partition(arr,l,u);
        quicksort(arr,l,pos-1);
        quicksort(arr,pos+1,u);
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
    quicksort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<*(arr+i);
    }

}