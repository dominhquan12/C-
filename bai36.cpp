#include<bits/stdc++.h>
using namespace std;

long long moduloLage(long long a, long long b, long long mod) { 
    long long res = 0;
    a %= mod; 
    while (b) { 
        if (b %2 != 0) 
            res = (res + a) % mod; 
        a = (2 * a) % mod; 
  
        b = b/2;
    } 
    return res; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,m;
		cin>>a>>b>>m;
		cout<<moduloLage(a,b,m)<<endl;
	}
	return 0;
}
