#include<bits/stdc++.h> 
using namespace std; 

int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

long long LCM(int x,int y,int z){
	long long t=(x*y)/gcd(x,y);
	return (t*z)/gcd(t,z);
}

long long findDivisible(int n, int x, int y, int z){ 
    long long lcm = LCM(x, y, z); 
    long long ndigitnumber = pow(10, n-1); 
    long long reminder = ndigitnumber % lcm;  
    if (reminder == 0) 
         return ndigitnumber; 
    ndigitnumber += lcm - reminder;  
    if (ndigitnumber < pow(10, n)) 
        return ndigitnumber; 
    else
        return -1; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y,z;
		cin>>x>>y>>z>>n;
		cout<<findDivisible(n,x,y,z)<<endl;
	}
	return 0;
}
