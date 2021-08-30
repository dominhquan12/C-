#include<bits/stdc++.h>
using namespace std;

int a[1000000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];
}

void sumMax(int a[],int n){
	long long maxsum=a[0];
	long long maxso=a[0];
	long long sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(maxso<a[i]) maxso=a[i];
		if(sum<0) sum=0;
		if(maxsum<sum) maxsum=sum;
	}
	if(maxso<=0) cout<<maxso<<endl;
	else cout<<maxsum<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		sumMax(a,n);
	}
	return 0;
}
