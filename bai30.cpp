#include<bits/stdc++.h>
using namespace std;

long long mod(string m, long long n){ 
    long long res = 0; 
    for (int i = 0; i < m.length(); i++) 
        res = (res*10 + m[i] - '0') %n; 
    return res; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		string m;
		long long n;
		cin>>m>>n;
		cout<<mod(m,n)<<endl;
	}
	return 0;
}
