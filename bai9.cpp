#include<bits/stdc++.h>
using namespace std;
 
bool nt(long long n){
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++) 
        if(n%i==0) return false;
    return true;
}

long long maxPrimeFactors(long long n){
	long long max;
	for(long long i=2;i<=sqrt(n);i++){
       	if(n%i==0){
           	if(nt(i)){
            	while(n%i==0){
            		max=i;
                	n=n/i;			
            	}
            }
       	}
   	}
    if(n!=1 && nt(n)) max=n;
    return max;
}
 
int main () {
	int t;
	cin>>t;
	while(t--){
		long long n;
    	cin>>n;
    	cout<<maxPrimeFactors(n)<<endl;
	}
    return 0;
}
