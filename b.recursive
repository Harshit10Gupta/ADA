#include<iostream>
using namespace std;
 int Binarysearch(int a[],int item,int f,int l)
 {
 	int m=(f+l)/2;
 	if(item==a[m])  return m;
 	if(f>l)  return -1;
 	if(a[m]>item) 	Binarysearch(a,item,f,m-1);
	if(item>a[m])Binarysearch(a,item,m+1,l);
 }
 
 int main()
 {
 	int a[100],n,i,m,first=0,last,item;
 	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the numbers for array."<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the number to search"<<endl;
	cin>>item;
	int r=Binarysearch(a,item,0,n-1);
	if(r>1) cout<<"found at"<<r;
	if(r==-1) cout<<"not found"<<endl;
	
 	
 	return 0;
 }
