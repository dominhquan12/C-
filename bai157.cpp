#include<bits/stdc++.h>
using namespace std;

bool isDigit(char let) {
		return let >= '0' && let <= '9';
}

bool isLength(string a,string b){
	return a.length()>b.length();
}

void xuly(string s){
	string t="";
	string max="";
	
	for(int i=0;i<=s.length();i++){
		if(isDigit(s[i])) t+=s[i];
		else{
			if(max.length()<t.length()) max=t;
			else if(max.length()==t.length()){
				if(t.compare(max)>0) max=t;
			}
			t="";
		}
		
		
	}
	cout<<max<<endl;
		
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
