#include<bits/stdc++.h>
using namespace std;

int a[1000000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}

void xuly(int a[],int n){
	bool check;
	int x=1;
	while(1){
		for(int i=0;i<n;i++){
			if(a[i]==x){
				check=true;
				break;
			}
			else check=false;
		}
		if(check) x++;
		else break;	
	}
	cout<<x<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		xuly(a,n);
	}
	return 0;
}
