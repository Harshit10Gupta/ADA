#include<iostream>
using namespace std;
int main()
{
	 int n,a[100],item;
	cout<<"enter array size"<<endl;
	cin>>n;
	cout<<"enter the elements in array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the item to be searched"<<endl;
	cin>>item;
	int l=0,r=n-1,m;
    m=(l+r)/2;
	while(l<=r){
		if(a[m]<item) l=m+1;
		else if(a[m]==item){
			cout<<"found"<<endl;
			break;
		}
		else r=m-1;
		 m=(l+r)/2;
	}
	
	if(l>r){
		cout<<"not found"<<endl;
	}
	return 0;
}
