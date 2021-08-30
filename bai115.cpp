#include<bits/stdc++.h>
using namespace std;

#define MAX 10000005 

int a[10000000];

void tim(int a[],int n){
	int firstmin = MAX, secmin = MAX;
	for(int i=0;i<n;i++){
		if(a[i]<firstmin){
			secmin = firstmin; 
            firstmin = a[i]; 
		}
		else if(a[i]<secmin) 
            secmin=a[i]; 
	}
	if(secmin!=firstmin)
		cout<<firstmin<<" "<<secmin<<endl;
	else cout<<"-1"<<endl;
}

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		tim(a,n);
	}
	return 0;
}


