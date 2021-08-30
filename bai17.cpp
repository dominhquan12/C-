#include<bits/stdc++.h>
using namespace std;

bool nt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return true;
}

int tongcs(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n=n/10;
	}
	return s;
}

int primeSum(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(nt(i)){
				while(n%i==0){
					sum+=tongcs(i);
					n=n/i;
				}
			}
		}
	}
	if(n!=1&&nt(n)) sum+=tongcs(n);
	return sum;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(!nt(n)&&(primeSum(n)==tongcs(n))) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;	
	}
}
