#include<bits/stdc++.h> 
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int min(int a[],int n){
	int m=a[0];
	for(int i=1;i<n;i++)
		if(m>a[i]) m=a[i];
	return m;
}

int max(int a[],int n){
	int m=a[0];
	for(int i=1;i<n;i++)
		if(m<a[i]) m=a[i];
	return m;
}

int a[1000000],b[1000000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		nhap(a,n);
		nhap(b,m);
		cout<<max(a,n)*min(b,m)<<endl;
	}
	return 0;
}
