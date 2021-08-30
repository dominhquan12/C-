#include<bits/stdc++.h>
using namespace std;

int a[100],n;
bool check=true;

void Tao(){
	check=true;
	for(int i=1;i<=n;i++)
		a[i]=0;
}
void In(){
	for(int i=1;i<=n;i++) 
		cout<<a[i];
	cout<<" ";
}
void Sinh(){
	int i=n;
	while(a[i]==1&&i>0){
		a[i]=0;
		i--;
	}
	if(i>0) a[i]=1;
	else check=false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Tao();
		while(check==true){
			In();
			Sinh();
		}
		cout<<endl;
	}
	return 0;
}
