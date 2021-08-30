#include<bits/stdc++.h> 
using namespace std;

int a[1000000],b[1000000],c[1000000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

void in(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

void xuly(int a[],int b[],int m,int n){
	int k=0;
	for(int i=0;i<m;i++){
		c[k]=a[i];
		k++;
	}
	for(int j=0;j<n;j++){
		c[k]=b[j];
		k++;
	}
	sort(c,c+k);
	in(c,k);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		nhap(a,m);
		nhap(b,n);
		xuly(a,b,m,n);
	}
	return 0;
}

