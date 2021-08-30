#include<bits/stdc++.h>
using namespace std;

#define MAX 1000000000005

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int tong(int a[],int n){
	long long min=MAX;
	long long t;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(min>abs(0-(a[i]+a[j]))){
				min=abs(0-(a[i]+a[j]));
				t=a[i]+a[j];
			}
		}
	}
	return t;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000],n;
		cin>>n;
		nhap(a,n);
		cout<<tong(a,n)<<endl;
	}
	return 0;
}
