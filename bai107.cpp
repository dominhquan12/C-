#include<bits/stdc++.h> 
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int dem(int a[],int n){
	int d=0;
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
		if(a[i]!=a[i+1]&&a[i]!=a[i+1]-1) d+=a[i+1]-a[i]-1;
	return d;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[1000];
		cin>>n;
		nhap(a,n);
		cout<<dem(a,n)<<endl;
	}
	return 0;
}
