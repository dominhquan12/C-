#include<bits/stdc++.h>
using namespace std;


void nhap(int a[],int n){
	for(int i=1;i<=n;i++) cin>>a[i];
}

int tim(int a[],int n,int k){
	sort(a,a+n);
	return a[k];
}

int a[1000000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		nhap(a,n);
		cout<<tim(a,n,k)<<endl;
	}
	return 0;
}
