#include<bits/stdc++.h>
using namespace std;

long long a[10000000];

void nhap(long long a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
long long min(long long a[],int n){
	long long min=a[0];
	for(int i=1;i<n;i++) 
		if(a[i]<min) min=a[i];
	return min;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		cout<<min(a,n)<<endl;
	}
}
