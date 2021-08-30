#include<bits/stdc++.h>
using namespace std;

void nhap(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void in(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void xoay(int a[100][100],int m,int n){
	int cot=0,hang=0;
	int truoc,hientai;
	while(hang<m && cot<n){
		if(hang+1==m || cot+1==n) break;
		truoc=a[hang+1][cot];
		for(int i=cot;i<n;i++){
			hientai=a[hang][i];
			a[hang][i]=truoc;
			truoc=hientai;
		}
		hang++;
		for(int i=hang;i<m;i++){
			hientai=a[i][n-1];
			a[i][n-1]=truoc;
			truoc=hientai;
		}
		n--;
		if(hang<m){
			for(int i=n-1;i>=cot;i--){
				hientai=a[m-1][i];
				a[m-1][i]=truoc;
				truoc=hientai;
			}
		}
		m--;
		if(cot<n){
			for(int i=m-1;i>=hang;i--){
				hientai=a[i][cot];
				a[i][cot]=truoc;
				truoc=hientai;
			}
		}
		cot++;
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,a[100][100];
		cin>>m>>n;
		nhap(a,m,n);
		xoay(a,m,n);
		in(a,m,n);
	}
	return 0;
}
