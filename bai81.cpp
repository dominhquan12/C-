#include<bits/stdc++.h>
using namespace std;

int a[1000000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}

int min(int a[],int n,int x){
	int m;
	for(int i=0;i<n;i++){
		if(a[i]>x) m=a[i];
	}
	return m;	
}

int max(int a[],int n){
	int m=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>m) m=a[i];
	}
	return m;	
}

int kqMin(int a[],int n,int x){
	int m=min(a,n,x);
	for(int i=0;i<n;i++)
		if(a[i]<m&&a[i]>x) m=a[i];
	return m;		
}

void xuly(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]!=max(a,n)) cout<<kqMin(a,n,a[i])<<" ";
		else cout<<"_ ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		xuly(a,n);
	}
	return 0;
}

