#include <iostream>
using namespace std;

int partition(int a[],int start,int end)
{
    int pivot=a[end];
    int pi=start-1;
    for(int i=start;i<end;i++){
        if(a[i]<pivot){
            swap(a[i],a[++pi]);
            
        }
    }
    swap(a[++pi],a[end]);
    return pi;
}

void quicksort(int a[],int start,int end){
    if(start<end){
        int pi=partition(a,start,end);
        quicksort(a,start,pi-1);
        quicksort(a,pi+1,end);
    }
}

int main()
{
    int a[100],n,i;
    cout<<"enter array size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    quicksort(a,0,n-1);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
     system("Pause");
    return 0;
}
