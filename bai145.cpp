#include<bits/stdc++.h>
using namespace std;

void nhap(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void in(int a[],int n){
	for(int i=n-1;i>=0;i--) cout<<a[i]<<" ";
	cout<<endl;
}

void xuly(int a[100][100],int m,int n){
	int k=0,l=0,z=0;
	int b[100];
	int size=m*n;
	while(k<m&&l<n){
		for(int i=l;i<n;i++){
			b[z]=a[k][i];
			z++;
		}
		k++;
		for(int i=k;i<m;i++){
			b[z]=a[i][n-1];
			z++;
		}
		n--;
		if(k<m){
			for(int i=n-1;i>=l;i--){
				b[z]=a[m-1][i];
				z++;
			}
			m--;
		}
		if(l<n){
			for(int i=m-1;i>=k;i--){
				b[z]=a[i][l];
				z++;
			}
			l++;
		}
		
	}
	in(b,size);

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		int a[100][100];
		cin>>m>>n;
		nhap(a,m,n);
		xuly(a,m,n);
	}
	return 0;
}
