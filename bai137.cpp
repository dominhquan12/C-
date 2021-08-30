#include<bits/stdc++.h>
using namespace std;

void nhap(bool a[105][105],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void in(bool a[105][105],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

void modifyMatrix(bool mat[105][105],int m,int n) { 
    bool row[m]; 
    bool col[n]; 
    for (int i = 0; i < m; i++) { 
    	row[i] = 0; 
    } 
    for (int j = 0; j < n; j++) { 
    	col[j] = 0; 
    } 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            if (mat[i][j] == 1) { 
                row[i] = 1; 
                col[j] = 1; 
            } 
        } 
    } 
  
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            if ( row[i] == 1 || col[j] == 1 ) { 
                mat[i][j] = 1; 
            } 
        } 
    }
	in(mat,m,n); 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		bool a[105][105];
		cin>>m>>n;
		nhap(a,m,n);
		modifyMatrix(a,m,n);
	}
	return 0;
}
