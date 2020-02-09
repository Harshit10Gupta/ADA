#include<iostream>
using namespace std;

int mult(int x,int y){
	if(y==1) return x;
	int t=mult(x,y/2);
	t=t+t;
	if(y%2!=0) t=t+x;
	return t;
}

int main(){
	int x,y;
	cout<<"enter x and y"<<endl;
	cin>>x>>y;
	int p=mult(x,y);
	cout<<"result= "<<p<<endl;
	return 0;
}
