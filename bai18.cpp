#include<bits/stdc++.h>
using namespace std;

void mang(long long a[]){
	int N[9]={2,3,5,7,13,17,19,31};
	for(int i=0;i<8;i++){
		a[i]=pow(2,N[i]-1)*(pow(2,N[i])-1);
	}

}

bool check(long long n,long long a[]){
	for(int i=0;i<8;i++){
		if(n==a[i]) return true;
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	long long a[9];
	mang(a);
	while(t--){
		long long n;
		cin>>n;
		if(check(n,a)) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;	
}


