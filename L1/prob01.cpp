#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[101][101],b[101][101],m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>b[i][j];
		}
	}
	int s=0;
	for(int i =1;i<=m;i++){
		for(int j=i;j<=n;j++){
			if(a[i][j]==b[i][j]) s++;
		}
	}
	printf("%0.2f",100*double(s)/(m*n));
}