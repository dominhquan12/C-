#include<bits/stdc++.h> 
using namespace std; 

#define mod 1000000007

long long nCr(int n, int r) { 
	long long C[r+1]; 
	memset(C, 0, sizeof(C)); 
	C[0] = 1; 
	for (int i = 1; i <= n; i++) { 
		for (int j = min(i, r); j > 0; j--) 
			C[j] = (C[j] + C[j-1])%mod; 
	} 
	return C[r]; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,r;
		cin>>n>>r;
		cout<<nCr(n,r)<<endl;
	}
	return 0;
}


