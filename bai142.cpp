#include<bits/stdc++.h>
using namespace std;

void nhap(char a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void floodFillUtil(char mat[100][100], int x, int y, char prevV, char newV,int m,int n) { 
    // Base cases 
    if (x < 0 || x >= m || y < 0 || y >= n) 
        return; 
    if (mat[x][y] != prevV) 
        return; 
  
    // Replace the color at (x, y) 
    mat[x][y] = newV; 
  
    // Recur for north, east, south and west 
    floodFillUtil(mat, x+1, y, prevV, newV,m,n); 
    floodFillUtil(mat, x-1, y, prevV, newV,m,n); 
    floodFillUtil(mat, x, y+1, prevV, newV,m,n); 
    floodFillUtil(mat, x, y-1, prevV, newV,m,n); 
} 
  
// Returns size of maximum size subsquare matrix 
// surrounded by 'X' 
int replaceSurrounded(char mat[100][100],int m,int n) { 
   // Step 1: Replace all 'O'  with '-' 
   for (int i=0; i<m; i++) 
      for (int j=0; j<n; j++) 
          if (mat[i][j] == 'O') 
             mat[i][j] = '-'; 
  
   // Call floodFill for all '-' lying on edges 
   for (int i=0; i<m; i++)   // Left side 
      if (mat[i][0] == '-') 
        floodFillUtil(mat, i, 0, '-', 'O',m,n); 
   for (int i=0; i<m; i++)  //  Right side 
      if (mat[i][n-1] == '-') 
        floodFillUtil(mat, i, n-1, '-', 'O',m,n); 
   for (int i=0; i<n; i++)   // Top side 
      if (mat[0][i] == '-') 
        floodFillUtil(mat, 0, i, '-', 'O',m,n); 
   for (int i=0; i<n; i++)  // Bottom side 
      if (mat[m-1][i] == '-') 
        floodFillUtil(mat, m-1, i, '-', 'O',m,n); 
  
   // Step 3: Replace all '-' with 'X' 
   for (int i=0; i<m; i++) 
      for (int j=0; j<n; j++) 
         if (mat[i][j] == '-') 
             mat[i][j] = 'X'; 
  
} 

void in(char a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		char a[100][100];
		cin>>m>>n;
		nhap(a,m,n);
		replaceSurrounded(a,m,n);
		in(a,m,n);
	}
	return 0;
}

