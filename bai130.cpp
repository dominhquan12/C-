#include<bits/stdc++.h>
using namespace std;

void nhap(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void xoay(int a[100][100],int m,int n){
	int k=0,l=0;
	while(k<m&&l<n){
		for(int i=l;i<n;i++){
			cout<<a[k][i]<<" ";
		}
		k++;
		for(int i=k;i<m;i++){
			cout<<a[i][n-1]<<" ";
		}
		n--;
		if(k<m){
			for(int i=n-1;i>=l;i--){
				cout<<a[m-1][i]<<" ";
			}
			m--;
		}
		
		if(l<n){
			for(int i=m-1;i>=k;i--){
				cout<<a[i][l]<<" ";
			}
			l++;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,a[100][100];
		cin>>m>>n;
		nhap(a,m,n);
		xoay(a,m,n);
		cout<<endl;
	}
	return 0;
}
