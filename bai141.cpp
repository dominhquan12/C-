#include<bits/stdc++.h>
using namespace std;

void nhap(bool a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void xuly(bool a[100][100],int m,int n) {  
    int i,j;  
    int b[m][n];  
    int max_of_s, max_i, max_j;   
    /* Set first column of S[][]*/
    for(i = 0; i < m; i++)  
        b[i][0] = a[i][0];  
      
    /* Set first row of S[][]*/
    for(j = 0; j < n; j++)  
        b[0][j] = a[0][j];  
          
    /* Construct other entries of S[][]*/
    for(i = 1; i < m; i++) {  
        for(j = 1; j < n; j++) {  
            if(a[i][j] == 1)  
                b[i][j] = min(b[i][j-1],min( b[i-1][j],  
                                b[i-1][j-1])) + 1;  
            else
                b[i][j] = 0;  
        }  
    }  
      
    /* Find the maximum entry, and indexes of maximum entry  
        in S[][] */
    max_of_s = b[0][0]; max_i = 0; max_j = 0;  
    for(i = 0; i < m; i++) {  
        for(j = 0; j < n; j++) {  
            if(max_of_s < b[i][j]) max_of_s = b[i][j];  
  
        }              
    }  
  	cout<<max_of_s<<endl;
   
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		bool a[100][100];
		cin>>m>>n;
		nhap(a,m,n);
		xuly(a,m,n);
	}
	return 0;
}
