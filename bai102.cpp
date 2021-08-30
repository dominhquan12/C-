#include<bits/stdc++.h> 
using namespace std;

int dem(int a[],int n,int k){
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i]+a[j])==k) ans++;
		}
	}
	return ans;
}

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[105],k;
		cin>>n>>k;
		nhap(a,n);
		cout<<dem(a,n,k)<<endl;
	}
	return 0;
}
