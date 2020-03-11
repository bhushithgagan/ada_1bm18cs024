#include<iostream>
using namespace std;

int f=0;
int r=-1;
int a[20][20],q[20],visited[20],n,i,j,flag=0;
void bfs(int v) {
	int w;
	visited[v]=1;
	q[++r]=v;
	while(f<=r) {
		v=q[f++];
		for(w=1;w<=n;w++)
		if((a[v][w]==1)&&(visited[w]==0)) {
			visited[w]=1;
			flag=1;
			cout<<w<<" \n";
			q[++r]=w;
		}
	}
			
}
int main() {
	int v;
	cout<<"Enter the no. of vertices"<<endl;
	cin>>n;
	cout<<"Enter the adjacency matrix"<<endl;
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++) {
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++) {
		visited[i]=0;
	}
	cout<<"Enter the start vertex"<<endl;
	cin>>v;
	cout<<"The nodes reachable from "<<v<<" are: "<<endl;
	bfs(v);
	if(flag==0)
		cout<<"NO path"<<endl;
	return 0;
}


