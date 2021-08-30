#include<bits/stdc++.h>
using namespace std;

int a[100000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}

int xuly(int a[],int n){
	int max=a[1]-a[0];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]-a[i]>max) max=a[j]-a[i];
		}
	}
	if(max>0) return max;
	return -1;
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
