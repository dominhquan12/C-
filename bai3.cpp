#include<bits/stdc++.h>

typedef long long ll;
const ll mod=pow(10,9)+7;
using namespace std;

void Nhap(ll A[],ll n){
	for(ll i=0;i<n;i++)
	cin>>A[i];
}

ll uc(ll a,ll b){
	if(b==0) return a;
	return uc(b,a%b);
}

ll ucmang(ll A[],ll n){
	ll c;
	c=A[0];
	for(ll i=0;i<n;i++)
		c=uc(c,A[i]);
	return c;
}

ll tichmang(ll A[],ll n){
	ll c=1;
	for(ll i=0;i<n;i++)
	c=(c*A[i])%mod;
	return c;
}

ll xuat(ll A[],ll n){
	ll c=1;
	for(ll i=1;i<=ucmang(A,n);i++)
		c=(c*tichmang(A,n))%mod;
	return c;
}

int main(){
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll A[n];
		Nhap(A,n);
		cout<<xuat(A,n)<<endl;
	}
	return 0;
}

