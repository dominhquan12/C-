#include<bits/stdc++.h>
using namespace std;

bool cp(int n){
	int t=sqrt(n);
	if(t*t==n) return true;
	else return false;
}
 
int dem(int n){
	int dem=0;
	for(int i=1;i<sqrt(n);i++){
		if(n%i==0){
			if(i%2!=0) dem++;
			if((n/i)%2!=0) dem++;
		}
		
	}
	if(cp(n)&&n%2!=0) dem++;
	return dem;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<dem(n)<<endl;
	}
	return 0;
}
