#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	int oddSum=0,evenSum=0;
	for(int i=0;i<s.length();i++){
		if(i%2==0) oddSum+=s[i]-'0';
		else evenSum+=s[i]-'0';
	}
	return ((oddSum-evenSum)%11==0);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check(s)) cout<<"1"<<endl;
		else cout<<"0"<<endl;
		
	}
	return 0;
}
