#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=1;i<=n;i++) cin>>a[i];
}

int tim(int a[],int n){
	int t=(n+2)*(n+1)/2;
	for(int i=1;i<=n;i++){
		t-=a[i];
	}
	return t;
}

int a[10000000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n-1);
		cout<<tim(a,n-1)<<endl;
	}
	return 0;
}
