#include<bits/stdc++.h>
using namespace std;

int a[100],n;
bool check=true;

void Tao(){
	check=true;
	for(int i=1;i<=n;i++)
		a[i]=i;
}

void In(){
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<" ";
}

void Sinh(){
	int i=n-1;
	while(i>0&&a[i]>a[i+1]) i--;
	if(i>0){
		int j=n;
		while(a[i]>a[j]) j--;
		swap(a[i],a[j]);
		int k=i+1;
		int h=n;
		while(k<h){
			swap(a[k],a[h]);
			k++;h--;
		}	
	}
	else check=false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Tao();
		while(check){
			In();
			Sinh();
		}
		cout<<endl;
	}
	return 0;
}
