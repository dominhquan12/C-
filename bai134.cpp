#include<bits/stdc++.h>
using namespace std;

void nhap(int a[100][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void in(int a[100][100],int n){
	for(int i=0;i<n;i++){
		if(i%2==1){
			for(int j=n-1;j>=0;j--) cout<<a[i][j]<<" ";	
		}
		else {
			for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[100][100];
		cin>>n;
		nhap(a,n);
		in(a,n);
		cout<<endl;
	}
	return 0;
}
