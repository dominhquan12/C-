#include<bits/stdc++.h>
using namespace std;

int a[10000000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}

int max(int a[],int k,int h){
	int max=a[k];
	for(int i=k+1;i<h;i++)
		if(max<a[i]) max=a[i];
	return max;
}
void xuly(int a[],int n,int k){
	for(int i=0;i<n;i++){
		if(i+k>n) break;
		cout<<max(a,i,i+k)<<" ";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		nhap(a,n);
		xuly(a,n,k);
		cout<<endl;
	}
	return 0;
}
