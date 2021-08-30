#include<bits/stdc++.h>
using namespace std;

int a[10000000],b[10000000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}

void tao(int a[],int n){
	for(int i=0;i<n;i++)
		a[i]=0;	
}

void xuly(int a[],int b[],int n,int x){
	for(int i=0;i<n;i++){
		int sum=a[i];
		b[i]=1;
		if(sum>x) {
			break;	
		}
		else{
			int j=i+1;
			while(sum<=x&&j<n){
				sum+=a[j];
				b[i]++;
				j++;
			}
			if(sum<=x) b[i]=-1;	
		}
		
	}
}

void in(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;	
}

int min(int a[],int n){
	int k=-1;
	for (int i=0;i<n;i++){
		if(a[i]!=-1) k=a[i];
	}
	for (int i=0;i<n;i++)
		if(k>a[i]&&a[i]!=-1) k=a[i];
	return k;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		nhap(a,n);
		tao(b,n);
		xuly(a,b,n,x);
		cout<<min(b,n)<<endl;
	}
	return 0;
}
