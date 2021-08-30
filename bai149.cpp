#include<bits/stdc++.h>
using namespace std;

bool isPangram(string S, int k) {  
    if (S.length() < 26) 
        return false;   
    int visited[26];  
    for(int i = 0; i < S.length(); i++)  
        visited[S[i] - 'a'] = true; 
    int count = 0; 
    for(int i = 0; i < 26; i++) { 
        if (!visited[i])  
            count += 1; 
    } 
    if(count <= k ) 
        return true; 
    return false; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s>>k;
		if(isPangram(s,k)) cout<<"1"<<endl;
		else cout<<"0"<<endl;
		
	}
	return 0;
}
