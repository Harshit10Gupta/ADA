#include <iostream>
using namespace std;

void merge(int a[], int f,int m, int l){
     int n1=m-f+1;
     int n2=l-m;
     int L[n1+1],R[n2+1];
     for(int i=0;i<n1;i++){
             L[i]=a[f+i];
             //L[i]=int_max;
     }
     for(int i=0;i<n2;i++){
             R[i]=a[i+m+1];
             //R[i]=int_max;
     }
     int i=0,j=0;
     for(int k=f;k<=l;k++){
             if(L[i]<R[j]){
                           a[k]=L[i];
                           i++;
                           }
             else{
                  a[k]=R[j];
                  j++;
                  }
                            }
}
void mergesort(int a[],int f, int l)
{
    if(f<l)
    {
          int m=(f+l)/2;
           mergesort(a,f,m);
           mergesort(a,m+1,l);
           merge(a,f,m,l);
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
    mergesort(a,0,n-1);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
     system("Pause");
    return 0;
}
