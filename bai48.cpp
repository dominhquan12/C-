#include<bits/stdc++.h>
using namespace std;

long long a[10000000];
long long b[10000000];

void Nhap(long long a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
bool check(long long a[],int n,long long b[],int m){
	for(int i=0;i<n;i++) 
		if(a[i]!=b[i]) return false;
	return true;
}
void copy(long long a[],int n,long long b[],int m){
	for(int i=0;i<n;i++) 
		b[i]=a[i];
}
void dichPhai(long long a[],int k,int n){
	while(k--){
		long long t = a[n - 1];
		for(int i = n - 1; i > 0; i--){
			a[i] = a[i - 1];
		}
		a[0] = t;
	}
}
void sapXep(long long a[],int n){
	int kt;
	long long t;
	for(int i=0;i<n;i++){
		kt=0;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				kt=1;
			}
		}
		if(kt==0) break;
	}
}
void In(long long a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Nhap(a,n);
		int m=n;
		copy(a,n,b,m);
		sapXep(a,n);
		int dem=0;
		while(1){
			dichPhai(a,1,n);
			dem++;
			if(check(a,n,b,m)) break;	
		}
		cout<<dem<<endl;	
	}

	return 0;
}

