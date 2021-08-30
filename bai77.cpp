#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}

void tao(int a[],int n){
	for(int i=0;i<n;i++)
		a[i]=1;	
}

void xuly(int a[],int b[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]) b[j]=b[i]+1;
		}
	}
}

void in(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";	
}

int max(int a[],int n){
	int k=a[0];
	for (int i=1;i<n;i++)
		if(k<a[i]) k=a[i];
	return k;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000],b[1000],n;
		cin>>n;
		nhap(a,n);
		tao(b,n);
		xuly(a,b,n);
		cout<<max(b,n)<<endl;
	}
	return 0;
}
