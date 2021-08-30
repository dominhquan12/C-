#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int xuly(int a[],int n){
	int min=abs(a[0]-a[1]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]!=a[j]&&min>abs(a[i]-a[j])) min=abs(a[i]-a[j]);
		}
	}
	return min;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[1000];
		cin>>n;
		nhap(a,n);
		cout<<xuly(a,n)<<endl;
	}
	return 0;
}
