#include<bits/stdc++.h> 
using namespace std; 

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

void in(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

void xuLy1(int a[],int b[],int m,int n){
	int i=0,j=0;
	while(i<m&&j<n){
		if(a[i]<b[j]) cout<<a[i++]<<" ";
		else if(a[i]>b[j]) cout<<b[j++]<<" ";
		else{
			cout<<a[i++]<<" ";
			j++;
		}
	
	} 
	while(i<m) cout<<a[i++]<<" ";
	while(j<n) cout<<b[j++]<<" ";
	cout<<endl;
	
}

void xuLy2(int a[],int b[],int m,int n){
	int i=0,j=0;
	while(i<m&&j<n){
		if(a[i]<b[j]) i++;
		else if(a[i]>b[j]) j++;
		else{
			cout<<a[i++]<<" ";
			j++;
		}
	
	} 
	cout<<endl;
}


int a[100000],b[100000];
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		nhap(a,m);
		nhap(b,n);
		sort(a,a+m);
		sort(b,b+n);
		xuLy1(a,b,m,n);
		xuLy2(a,b,m,n);
	}
	return 0;
}
