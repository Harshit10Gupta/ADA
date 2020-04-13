#include<iostream>
using namespace std;
bool gph[4][4]={{0,1,1,1},{1,0,1,0},{1,1,0,1},{1,0,1,0}};
int V=4,m=3,x[4]={0};

bool issafe(int v,int c){
	for(int i=0;i<V;i++){
		if(gph[v][i]&&c==x[i]) return false;
	}
	return true;
}

bool gphcolor(int v){
	if(v==V) return true;
	for(int c=1;c<=m;c++){
		if(issafe(v,c)){
			x[v]=c;
			if(gphcolor(v+1)==true) return true;
		}
	} return false;
}

int main()
{
	if(gphcolor(0)==false){
		cout<<"no solution exist"<<endl;
		exit(-1);
	}
	cout<<"the solution is\n";
	for(int i=0;i<V;i++)
	cout<<x[i]<<"";
	
	return 0;
}
