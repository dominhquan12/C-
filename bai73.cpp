#include<bits/stdc++.h>
using namespace std;

int a[10000000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}

int xuly(int a[],int n){
	int max=0;
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>=i+1;j--){
			if(a[j]>a[i]) {
				max=j-i;
				break;	
			}
		}
		if(max!=0) break;
	}
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>=i+1;j--){
			if(a[j]>a[i]&&(j-i)>max) max=j-i;
		}
	}
	return max;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		cout<<xuly(a,n)<<endl;
	}
	return 0;
}
