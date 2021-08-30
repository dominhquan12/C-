#include<bits/stdc++.h>
using namespace std;


void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
void in(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void xuly(int a[],int n,int b[]){
	int c=0,d=n-1;
	bool check=true;
	for(int i=0;i<n;i++){
		if(check) {
			b[i]=a[d];
			d--;
		}
		else {
			b[i]=a[c];
			c++;
		}
		check=!check;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000],b[1000],n;
		cin>>n;
		nhap(a,n);
		sort(a,a+n);
		xuly(a,n,b);
		in(b,n);
	}
	return 0;
}
