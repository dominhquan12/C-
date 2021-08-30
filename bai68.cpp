#include<bits/stdc++.h>
using namespace std;

int a[100000];

void nhap(int a[],int n){
	for(int i=1;i<=n;i++)
	 cin>>a[i];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		nhap(a,n);
		sort(a,a+n);
		cout<<a[k]<<endl;
	}
	return 0;
}
