#include<bits/stdc++.h>
using namespace std;

int a[100000];
int b[100000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
void in(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void xuly(int a[],int n,int b[]){
	b[0]=a[0]*a[1];
	b[n-1]=a[n-2]*a[n-1];
	for(int i=1;i<n-1;i++){
		b[i]=a[i-1]*a[i+1];
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		xuly(a,n,b);
		in(b,n);
		
	}
}
