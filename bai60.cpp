#include<bits/stdc++.h>
using namespace std;

void process(){
    string s;
    cin >> s;
    stack<int> stk;
    for(int i=0;i<=s.length();i++){
        stk.push(i+1);
        if (s[i] == 'I' || i == s.length()){
            while(!stk.empty()){
                cout << stk.top();
                stk.pop();
            }
        }
    }
    cout << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		process();
	}
	return 0;
}
