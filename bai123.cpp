#include<bits/stdc++.h>
using namespace std;


void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

void tim(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]>a[i+1]) {
			cout<<a[i+1]<<endl;
			return;
		}
	}
}

int a[100000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		tim(a,n);
	}
	return 0;
}
