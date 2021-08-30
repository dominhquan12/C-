#include<bits/stdc++.h> 
using namespace std; 

int a[100000],b[100000];
void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

void in(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

void sapXep(int a[],int n,int x){
	for(int i=0;i<n;i++){
		b[i]=abs(x-a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(b[i]>b[j]){
				int t=b[i];
				b[i]=b[j];
				b[j]=t;
				int k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	in(a,n);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		nhap(a,n);
		sapXep(a,n,x);
	}
	return 0;
}
