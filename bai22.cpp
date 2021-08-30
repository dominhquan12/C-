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

int leastPrimeFactor(int n){
	bool isPrime[n+1]; 
    SieveOfEratosthenes(n, isPrime);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(isPrime[i]){
				return i;
			}
		}
	}
	return n;
}

void nhap(int a[],int n){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int* a=new int[n];
		cin>>n;
		nhap(a,n);
		for(int i=1;i<=n;i++){
			cout<<leastPrimeFactor(a[i])<<" ";
		}
		cout<<endl;
	}
	return 0;
}
