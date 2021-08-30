#include<bits/stdc++.h>
using namespace std;

int comp(int const &i, int const &j) {
	return i > j;
}


void nhap(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void tao(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=0;
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
	cout<<endl;
}

void xuly(int a[100][100],int m,int n){
	int b[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[i][j];	
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==1&&a[i+1][j]==1) b[i+1][j]=b[i][j]+1;	
		}
	}
	for(int i=0;i<m;i++){
		sort(b[i],b[i]+n,comp);
	}
	int x,y=0; 
    for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++){ 
            x=(j+1)*b[i][j]; 
            if (x>y) y=x; 
        } 
    } 
	cout<<y<<endl;
}

int a[100][100];

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		nhap(a,m,n);
		xuly(a,m,n);
	}
	return 0;
}
