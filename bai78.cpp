#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}

void tao(int a[],int n){
	for(int i=0;i<n;i++)
		a[i]=1;	
}



void in(int a[],int n,int b[]){
	for(int i=0;i<n;i++){
		if(b[i]>=10)
		cout<<a[i]<<"  ";
		else cout<<a[i]<<" ";	
	}
}

int max(int a[],int n){
	int k=a[0];
	for (int i=1;i<n;i++)
		if(k<a[i]) k=a[i];
	return k;
}

void xuly(int a[],int b[],int n){
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]&&b[i]<b[j]+1) b[i]=b[j]+1;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000],b[1000],n;
		cin>>n;
		nhap(a,n);
		tao(b,n);
		xuly(a,b,n);
//		in(b,n,a);
		cout<<max(b,n)<<endl;
	}
	return 0;
}
