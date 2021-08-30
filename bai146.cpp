#include<bits/stdc++.h>
using namespace std;

void nhap(int a[105][105],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void zigZagMatrix(int arr[105][105], int n, int m) { 
    int row = 0, col = 0; 
  
    // Boolean variable that will true if we 
    // need to increment 'row' value otherwise 
    // false- if increment 'col' value 
    bool row_inc = 0; 
  
    // Print matrix of lower half zig-zag pattern 
    int mn = min(m, n); 
    for (int len = 1; len <= mn; ++len) { 
        for (int i = 0; i < len; ++i) { 
            cout << arr[row][col] << " "; 
  
            if (i + 1 == len) 
                break; 
            // If row_increment value is true 
            // increment row and decrement col 
            // else decrement row and increment 
            // col 
            if (row_inc) 
                ++row, --col; 
            else
                --row, ++col; 
        } 
  
        if (len == mn) 
            break; 
  
        // Update row or col value according 
        // to the last increment 
        if (row_inc) 
            ++row, row_inc = false; 
        else
            ++col, row_inc = true; 
    } 
  
    // Update the indexes of row and col variable 
    if (row == 0) { 
        if (col == m - 1) 
            ++row; 
        else
            ++col; 
        row_inc = 1; 
    } 
    else { 
        if (row == n - 1) 
            ++col; 
        else
            ++row; 
        row_inc = 0; 
    } 
  
    // Print the next half zig-zag pattern 
    int MAX = max(m, n) - 1; 
    for (int len, diag = MAX; diag > 0; --diag) { 
  
        if (diag > mn) 
            len = mn; 
        else
            len = diag; 
  
        for (int i = 0; i < len; ++i) { 
            cout << arr[row][col] << " "; 
  
            if (i + 1 == len) 
                break; 
  
            // Update row or col value according 
            // to the last increment 
            if (row_inc) 
                ++row, --col; 
            else
                ++col, --row; 
        } 
  
        // Update the indexes of row and col variable 
        if (row == 0 || col == m - 1) { 
            if (col == m - 1) 
                ++row; 
            else
                ++col; 
  
            row_inc = true; 
        } 
  
        else if (col == 0 || row == n - 1) { 
            if (row == n - 1) 
                ++col; 
            else
                ++row; 
  
            row_inc = false; 
        } 
    } 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		int a[105][105];
		cin>>m>>n;
		nhap(a,m,n);
		zigZagMatrix(a,m,n);
		cout<<endl;
	}
	return 0;
}
