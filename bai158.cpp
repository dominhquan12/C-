#include<bits/stdc++.h>
using namespace std;

int calcMaxValue(string str) { 
    int res = str[0] -'0'; 
    for (int i = 1; i < str.length(); i++) { 
        if (str[i] == '0' || str[i] == '1' || 
            res < 2 ) 
            res += (str[i]-'0'); 
        else
            res *= (str[i]-'0'); 
    } 
    return res; 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<calcMaxValue(s)<<endl;
	}
	return 0;
} 
