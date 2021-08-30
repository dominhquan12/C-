#include<bits/stdc++.h> 
using namespace std; 

long long gcd(long long a,long long b){
	if(b==0) return a;
	return gcd(b,a%b);
}

void findGCD(long long a,long long x,long long y){
	long long g=gcd(x,y);
	for(long long i=0;i<g;i++){
		cout<<a;
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		findGCD(a,x,y);	
	}
	return 0;
}
