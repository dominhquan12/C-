#include<bits/stdc++.h>
using namespace std;

long long a[10000000];

void nhap(long long a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

long long sum(long long a[],int n){
	long long s=0;
	for(int i=0;i<n;i++) s+=i*a[i];
	return s;
}
void dichTrai(long long a[],int k,int n){
	while(k--){
		long long t=a[0];
		for(int i=0;i<n-1;i++){
			a[i]=a[i+1];
		}
		a[n-1] = t;
	}
}

void in(long long a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		long long d=a[n-1];
		long long max=0;
		long long s=sum(a,n);
		while(1){
			dichTrai(a,1,n);
			s=sum(a,n);
			if(max<s) max=s;
			if(a[0]==d) break;
		}
		cout<<max<<endl;			
	}

	return 0;
}

