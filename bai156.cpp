#include<bits/stdc++.h>
using namespace std;

string sumBigNumber(string a,string b){
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
	return kq1;
}

bool isDigit(char let) {
		return let >= '0' && let <= '9';
}

void xuly(string s){
	string t="";
	string sum="0";
	
	for(int i=0;i<=s.length();i++){
		if(isDigit(s[i])) t+=s[i];
		else{
			sum=sumBigNumber(sum,t);
			t="";
		}
		
		
	}
	cout<<sum<<endl;
		
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		xuly(s);	
	}
	return 0;
}
