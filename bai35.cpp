#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

void nhap(int a[],int &n,int &x){
	cin>>n>>x;
	for(int i=0;i<n;i++)
		cin>>a[i];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[2000],x;
		nhap(a,n,x);
		long long s=a[0];
		for(int i=1;i<n;i++){
			s=(s*x+a[i])%mod;	
		}
		cout<<s<<endl;
	}
	return 0;
}
