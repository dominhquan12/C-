#include<bits/stdc++.h> 
using namespace std; 

int xuly(int n, int p) { 
    long long ans = 0; 
    for (long long x=1; x<p; x++) { 
        if ((x*x)%p == 1) { 
            long long last = x + p * (n/p); 
            if (last > n) 
                last -= p; 
            ans += ((last-x)/p + 1); 
        } 
    } 
    return ans; 
} 


int main(){
	int t;
	cin>>t;
	while(t--){
		int b,p;
		cin>>b>>p;
		cout<<xuly(b,p)<<endl;
	}
	return 0;
}
