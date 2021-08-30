#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int dem(int a[],int n,int k){
	int d=0;
	for(int i=0;i<n;i++){
		if(a[i]==k) d++;
	}
	if(d==0) return -1;
	else return d;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000],n,k;
		cin>>n>>k;
		nhap(a,n);
		cout<<dem(a,n,k)<<endl;
	}
	return 0;
}
