#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
	if(!b) return a;
	return gcd(b,a%b);
}

bool xuly(long long n, long long m) { 
    long long total_sum = (n * (n + 1)) / 2; 
    long long sum_s1 = (total_sum + m) / 2; 
    long long sum_s2 = total_sum - sum_s1; 
    if (total_sum < m) 
        return false; 
    if (sum_s1 + sum_s2 == total_sum && 
        sum_s1 - sum_s2 == m) 
        return (gcd(sum_s1, sum_s2) == 1); 
    return false; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		if(xuly(n,m)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl; 
	}
	return 0;	
}
