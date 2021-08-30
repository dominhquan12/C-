#include<bits/stdc++.h>
using namespace std;

int min(int a[],int n){
	int m=a[0];
	for(int i=1;i<n;i++){
		if(a[i]<m) m=a[i];
	}
	return m;
}
void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
int xuly_min(int m){
	int d=0;
	while(1){
		if(m%2==1){
			m=m-1;
			d++;
			while(m%2==0){
				m=m/2;
				d++;
			}
		}
		else {
			while(m%2==0){
				m=m/2;
				d++;
			}
		}
		if(m==1) break;
	}
	return d;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[1000];
		cin>>n;
		nhap(a,n);
		int dem=n;
		int m=min(a,n);
		dem=dem+xuly_min(m);
		for(int i=0;i<n;i++){
			if(a[i]>m){
				while(1){
					a[i]=a[i]-1;
					dem++;
					if(a[i]==m) break;
				}
			}
		}
		cout<<dem<<endl;
	}
}
