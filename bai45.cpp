#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];
bool check=true;

void Tao(){
	check=true;
	for(int i=1;i<=k;i++)
		a[i]=i;
}

void Sinh(){
	int i=k;
	while(i>0&&a[i]==n-k+i) i--;
	if(i>0) {
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
	else check=false;
}
void In(){
	for(int i=1;i<=k;i++)
		cout<<a[i];
		cout<<" ";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Tao();
		while(check){
			In();
			Sinh();
		}
		cout<<endl;
	}
	return 0;
}
