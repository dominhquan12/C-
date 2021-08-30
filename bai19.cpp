#include<bits/stdc++.h>
using namespace std;

bool nt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return true;
}

int kPrimeFactor(int n,int k){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(nt(i)){
				while(n%i==0){
					k--;
					n/=i;
					if(k==0) return i;		
				}	
			}
			
		}
	}
	if(n!=1&&nt(n)&&k==1) return n;
	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<kPrimeFactor(n,k)<<endl;	
	}
	return 0;
}
