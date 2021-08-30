#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

void xuly(int a[],int n,int k){
	sort(a,a+n);
	for(int i=n-1;i>=n-k;i--) cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000],n,k;
		cin>>n>>k;
		nhap(a,n);
		xuly(a,n,k);
	}
	return 0;
}
