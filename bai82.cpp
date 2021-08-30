#include<bits/stdc++.h>
using namespace std;

struct Query { 
    int L, R; 
}; 

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

void nhapQ(Query q[],int m){
	for(int i=0;i<m;i++){
		cin>>q[i].L>>q[i].R;
	}
}
void querySums(int a[], int n, Query q[], int m) {  
    for (int i=0; i<m; i++) { 
        int L = q[i].L, R = q[i].R; 
        int sum = 0; 
        for (int j=L; j<=R; j++) 
            sum += a[j]; 
        cout<< sum << " "; 
    } 
} 

int a[10000];
Query q[10000];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		nhap(a,n);
		nhapQ(q,m);
		querySums(a,n,q,m);		
	}
}
