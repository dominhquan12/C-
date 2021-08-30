#include<bits/stdc++.h>

using namespace std;

string s[100];
void nhap(string s[],int n){
	for(int i=0;i<n;i++)
		cin>>s[i];	
}
void in(string s[],int n){
	for(int i=0;i<n;i++)
		cout<<s[i];
}
bool sosanh(string a, string b){
    string ab=a+b;
    string ba=b+a;
    if(ab.compare(ba)>0) return true;
    return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(s,n);
		sort(s,s+n,sosanh);
		in(s,n);	
	}
	return 0;
}
