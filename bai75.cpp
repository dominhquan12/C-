#include<bits/stdc++.h>
using namespace std;

int a[10000000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}

int xuly(int a[],int n){
	int max;
	for(int i=0;i<n;i++){
		if(a[i+1]<a[i]){
			max=a[i];
			break;
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
