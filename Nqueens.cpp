#include<bits/stdc++.h>
using namespace std;
int n=4,count=0,x[5]={0};
int isattackcol(int c){
	for(int i=1;i<=n;i++){
		if(x[i]==c) return 1;
	}
	return 0;
}

int isattackdiag(int r,int c){
	for(int i=1;i<=n;i++){
		if(x[i]!=0){
			if(abs(i-r)==abs(x[i]-c)) return 1;
		}
	}
	return 0;
}

int chk(){
	for(int i=1;i<=n;i++){
		if(x[i]!=0) return 0;}
		return 1;
}
void write(int x[]){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<endl;}
		
}

void NQueens(int r){
	int c=1;
	while(c<=n){
		int chk1=isattackcol(c);
		int chk2=isattackdiag(r,c);
	    if(chk1==0 && chk2==0){
	    	x[r]=c;
	    	
	    	if(r==n){
	    		cout<<"output: ";
				count++;
				write(x);
			}
			else
			NQueens(r+1);
		}
		c++;
	}
	x[r]=0;
	if(chk()==1){
		cout<<"no more solution:";
		cout<<"total sol:"<<count;
		exit(-1);
	}
}

int main()
{
	NQueens(1);
	return 0;
}
