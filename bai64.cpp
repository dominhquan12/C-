#include<bits/stdc++.h>
using namespace std;

void nhap(int a[][1000],int m,int n){
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		 cin>>a[i][j];
}

void in(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}

int b[10000];
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[10][1000],m,n;
		cin>>m>>n;
		nhap(a,m,n);
		int k=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				b[k]=a[i][j];
				k++;
			}
		}
		sort(b,b+m*n);
		in(b,m*n);		
	}
	return 0;
}
