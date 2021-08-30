#include<bits/stdc++.h>
using namespace std;

int xuly(int a[],int n){
	int d=0;
	int i=0,j=n-1;
	while(i<=j){
		if(a[i]==a[j]){
			i++;
			j--;
		}
		else if(a[i]<a[j]){
			i++;
			a[i]+=a[i-1];
			d++;
		}
		else {
			j--;
			a[j]+=a[j+1];
			d++;
		}
	}
	return d;
}
void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[1000];
		cin>>n;
		nhap(a,n);
		cout<<xuly(a,n)<<endl;
	}
}
