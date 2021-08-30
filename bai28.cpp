#include<bits/stdc++.h>
using namespace std;

int modul(int n,long long k){
	int s=0;
	for(int i=1;i<=n;i++){
		s+=i%k;
	}
	return s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		cout<<modul(n,k)<<endl;
	}
	return 0;
}
