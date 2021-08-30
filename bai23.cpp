#include<bits/stdc++.h>
using namespace std;

bool nt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int dem=0;
		for(int i=2;i<=sqrt(n);i++){
			if(nt(i)) dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}
