#include<bits/stdc++.h>
using namespace std;

void nhap(int a[][100],int n){
	for(int i=0;i<n;i++)
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
		int a[100][100],k,n;
		cin>>n>>k;
		nhap(a,n);
		int m=1;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				b[m]=a[i][j];
				m++;
			}
		}
		sort(b,b+n*n);
		cout<<b[k]<<endl;		
	}
	return 0;
}
