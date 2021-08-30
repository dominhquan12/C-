#include<bits/stdc++.h>
using namespace std;
 
bool nt(int n){
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++) 
        if(n%i==0) return false;
    return true;
}

bool ktUocNT(int n){
	int dem=0;	
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(nt(i)){
				int d=0;
				while(n%i==0){
					dem++;
					d++;
					n=n/i;
				}
				if(d>1) return false;
			}
		}
	}
	if(n!=1 && nt(n)) dem++;
	if(dem==3) return true;
	else return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(ktUocNT(n)) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
