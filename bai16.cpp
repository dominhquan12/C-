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
		int n;
		cin>>n;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				if(nt(i)){
					int d=0;
					while(n%i==0){
						d++;
						n=n/i;
					}
					cout<<i<<" "<<d<<" ";
				}
			}
		}
		if(n!=1&&nt(n)) cout<<n<<" "<<1;
		cout<<endl;
	}
	return 0;
}
