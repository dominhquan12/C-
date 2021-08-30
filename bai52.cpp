#include<bits/stdc++.h>
using namespace std;

long long a[10000000];


void nhap(long long a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
void in(long long a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void xuly(long long a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]==0){
			for(int j=i+1;j<n;j++){
				if(a[j]!=0) {
					swap(a[i],a[j]);
					break;
				}
			}
		}
	}	
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		xuly(a,n);
		in(a,n);
	}
	return 0;
}
