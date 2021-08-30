#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];
}

void xuly(int a[],int n,int left[],int right[]){
	left[0]=0;
	int k=0;
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1])
			k=i;
		left[i]=k;
	}
	right[n-1]=n-1;
	int h=n-1;
	for(int i=n-2;i>=0;i--){
		if(a[i]>a[i+1])
			h=i;
		right[i]=h;
	}
}

int a[10000],b[10000],c[10000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,L,R;
		
		cin>>n;
		nhap(a,n);
		cin>>L>>R;
		xuly(a,n,b,c);
		if(c[L]>=b[R]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
