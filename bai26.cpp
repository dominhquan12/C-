#include<bits/stdc++.h>
using namespace std;

long long power(long long x, long long y, long long p) { 
    long long res = 1;     
    while (y > 0) { 
        if (y %2 != 0) 
            res = (res*x) % p; 
        y = y/2; 
        x = (x*x) % p;   
    } 
    return res; 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,p;
		cin>>x>>y>>p;
		cout<<power(x,y,p)<<endl;
	}
	return 0;
}
