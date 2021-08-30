#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=1;i<=n;i++) cin>>a[i];
}

int tim(int a[],int n,int x){
	for(int i=1;i<=n;i++)
		if(a[i]==x) return i;
	return -1;
}

int a[1000000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		nhap(a,n);
		cout<<tim(a,n,x)<<endl;
	}
	return 0;
}
