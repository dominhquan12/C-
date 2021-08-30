#include<bits/stdc++.h>
using namespace std;

long long GCD(long long a,long long b){
	if (b == 0) 
        return a; 
    return GCD(b, a % b); 
}


long long LCM(long long n) { 
    long long ans = 1;     
    for (long long i = 1; i <= n; i++) 
        ans = (long long)(ans * i)/(GCD(ans, i)); 
    return ans; 
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<LCM(n)<<endl;		
	}
}
