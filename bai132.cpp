#include<bits/stdc++.h>
using namespace std;

void nhap(int a[100][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void tao(int a[],int n){
	for(int i=0;i<n;i++) a[i]=0;
}
int dem(int a[100][100],int n){
	int tongCot[n],tongHang[n];
	tao(tongCot,n);
	tao(tongHang,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			tongCot[j]+=a[i][j];
			tongHang[i]+=a[i][j];
		}
	}
	int maxSum=0;
	for(int i=0;i<n;i++){
		maxSum=max(maxSum,tongCot[i]);
		maxSum=max(maxSum,tongHang[i]);
	}
	
	int dem=0;
	int i=0,j=0;
	while(i<n&&j<n){
		int k=min(maxSum-tongCot[j],maxSum-tongHang[i]);
		a[i][j]+=k;
		tongCot[j]+=k;
		tongHang[i]+=k;
		dem+=k;
		if(tongHang[i]==maxSum) i++; 
        if(tongCot[j]==maxSum) j++;
	}
	return dem;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[100][100];
		cin>>n;
		nhap(a,n);
		cout<<dem(a,n)<<endl;
	}
}


