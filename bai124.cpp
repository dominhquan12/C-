#include<bits/stdc++.h>
using namespace std;


void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int tim(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]) return a[i];
		}
	}
}

int a[1000000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		cout<<tim(a,n)<<endl;
	}
	return 0;
}
