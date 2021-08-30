#include<bits/stdc++.h>
using namespace std;

int a[10000000],b[10000000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}

void tao(int a[],int n){
	for(int i=0;i<n;i++)
		a[i]=0;	
}

void xuly(int a[],int b[],int n){
	b[0]=a[0];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]) {
				b[j]=b[i]+a[j];
			}
		}
	}
}

void in(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;	
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
		int n;
		cin>>n;
		nhap(a,n);
		tao(b,n);
		xuly(a,b,n);
		cout<<max(b,n)<<endl;
	}
	return 0;
}
