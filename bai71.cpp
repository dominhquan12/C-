#include<bits/stdc++.h>
using namespace std;

int a[100000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}
long long xuly(int a[],int n){
	long long sum=a[0];
	long long max=0;
	long long max_new;
	for(int i=1;i<n;i++){
		if(sum>max) max_new=sum;
		else max_new=max;
		sum=max+a[i];
		max=max_new;
	}
	if(sum>max) return sum;
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
