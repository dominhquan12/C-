#include<bits/stdc++.h>
using namespace std;

void sumBigNumber(string a,string b){
	if(b.length()>a.length())
		swap(b,a);
	string kq;
	string kq1;
	int i,nho=0,m=a.length(),n=b.length(),t;
	a="0"+a;
	for(i=0;i<m-n+1;i++) b="0"+b;
	for(i=m;i>=0;i--){
		t=(a[i]-'0')+(b[i]-'0')+nho;
		if(t>9){
			t=t-10;
			nho=1;
		}
		else{
			nho=0;
		}
		kq[i]=t+'0';
	}
	int index;
	if(kq[0]=='0') {
		for(int i=1;i<=m;i++){
			kq1+=kq[i];
		}
	}
	else {
		for(int i=0;i<=m;i++){
			kq1+=kq[i];
		}
	}
	cout<<kq1;
}

void sumMin(string a,string b){
	for(int i=0;i<a.length();i++){
		if(a[i]=='6') a[i]='5';
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='6') b[i]='5';
	}
	sumBigNumber(a,b);
}
void sumMax(string a,string b){
	for(int i=0;i<a.length();i++){
		if(a[i]=='5') a[i]='6';
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='5') b[i]='6';
	}
	sumBigNumber(a,b);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a;
		cin>>b;
		sumMin(a,b);
		cout<<" ";
		sumMax(a,b);
		cout<<endl;		
	}
	return 0;
}
