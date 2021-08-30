#include<bits/stdc++.h>
using namespace std;
 
bool nt(int n){
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++) 
        if(n%i==0) return false;
    return true;
}

int leastPrimeFactor(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(nt(i)){
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

int a[10000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		for(int i=1;i<=n;i++){
			cout<<leastPrimeFactor(a[i])<<" ";
		}
		cout<<endl;
	}
	return 0;
}
