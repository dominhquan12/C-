#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
	while(b>0){
		int tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		long long t=(long long)a*b/GCD(a,b);
		cout<<t<<" "<<GCD(a,b)<<endl;	
	}
	
	return 0;
} 
