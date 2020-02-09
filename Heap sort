#include<bits/stdc++.h>
using namespace std;

void heapify(int i,int a[],int hs)
{
	int l=2*i+1;
	int r=2*i+2;
	int max=i;
	
	if(a[l]>a[max] && l<=hs)  max=l;
	if(a[r]>a[max] && r<=hs)  max=r;
	if(max!=i){
		swap(a[i],a[max]);
		heapify(max,a,hs);
	}
}


void buildheap(int a[],int n,int hs)
{
for(int i=(n/2)-1;i>=0;i--) heapify(i,a,hs);
}

void heapsort(int a[],int n,int hs)
{
	buildheap(a, n, hs);
	while(hs>=1){
		swap(a[0],a[hs]);
		hs--;
		heapify(0,a,hs);
	}
	
}

int main(){
	int n,a[100],i;
	cout<<"enter the array size"<<endl;
	cin>>n;
	int hs=n-1;
	cout<<"enter the elements of array"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	heapsort(a,n,hs);
	
	cout<<"sorted elements of array:"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	return 0;
}
