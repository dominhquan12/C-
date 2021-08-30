#include<bits/stdc++.h>
using namespace std;


void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int tim(int a[],int n,int k){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i]-a[j])==k) return 1;
		}
	}
	return -1;
}

int a[100000];

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
