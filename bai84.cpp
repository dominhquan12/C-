#include<bits/stdc++.h>
using namespace std;

bool SieveOfEratosthenes(int n, bool isPrime[]) { 
    isPrime[0] = isPrime[1] = false; 
    for (int i=2; i<=n; i++) 
        isPrime[i] = true; 
    for (int p=2; p*p<=n; p++) { 
        if (isPrime[p] == true) { 
            for (int i=p*p; i<=n; i += p) 
                isPrime[i] = false; 
        } 
    } 
}

int dem(int L,int R){
	bool isPrime[R+1];
	SieveOfEratosthenes(R,isPrime);
	int d=0;
	for(int i=L;i<=R;i++){
		if(isPrime[i]) d++;
	}
	return d;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int L,R;
		cin>>L>>R;
		cout<<dem(L,R)<<endl;
	}
	return 0;
}
