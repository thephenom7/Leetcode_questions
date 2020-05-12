 #include<iostream>
 using namespace std;
 void merge(int *arr,int l,int m,int r)
 {
     int n1=m-l+1;
     int n2=r-m;
     int le[n1];
     int ri[n2];
     int i,j;
    for(i=0;i<n1;i++)
    {
        le[i]=arr[l+i];
    }
    for(i=0;i<n2;i++)
    {
        ri[i]=arr[m+1+i];
    }  
    i=0;
    j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(le[i]<ri[j])
        {
            arr[k]=le[i];
            cout<<"\n"<<le[i]<<"<"<<ri[j]<<"\t"<<arr[k];
            
            i++;
        }
        else
        {
            arr[k]=ri[j];
            cout<<"\n"<<le[i]<<">"<<ri[j]<<"\t"<<arr[k];

            j++;
        }
        k++;
        
    }
    while(i<n1)
    {
        arr[k]=le[i];
        k++;
        i++;

    }
    while(j<n2)
    {
        arr[k]=ri[j];
        j++;
        k++;

    }

 }
 void mergesort(int *arr,int l,int r)
 {
     if(l<r)
     {
         int m=(l+r)/2;
         mergesort(arr,l,m);
         mergesort(arr,m+1,r);
         merge(arr,l,m,r);
     }
     else
     {
         return;
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
    mergesort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<*(arr+i);
    }

}