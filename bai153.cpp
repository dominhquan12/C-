#include<bits/stdc++.h> 
using namespace std; 
  
const int no_of_chars = 256;

bool isPossible(string str) { 
    int freq[no_of_chars] = {0}; 
    int max_freq = 0; 
    for (int j = 0; j < str.length(); j++) { 
        freq[str[j]]++; 
        if (freq[str[j]] > max_freq) 
            max_freq = freq[str[j]]; 
    } 
    if (max_freq <= (str.length() - max_freq + 1)) 
        return true; 
    return false; 
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(isPossible(s)) cout<<"1"<<endl;	
		else cout<<"0"<<endl;	
	}
	return 0;
}

/*

#include<bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long i64;
string s;
void input(){
    cin >> s;
}
void solve(){
    vector < int > cnt(26,0);
    for(int i = 0 ; i < s.length() ; i++) cnt[s[i]-'a'] ++;
    sort(cnt.begin(),cnt.end());
    int sum = 0;
    for(int i = 24 ; i >= 0 ; i--){
        sum += cnt[i];
        if ( sum + 1 >= cnt[25] ){
            cout << 1 << endl;
            return;
        }
    }
    cout <<  0  << endl; 
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    faster();int t=1; 
    cin>>t; cin.ignore();
    while(t--){ input();solve();}
    cerr << "\nRunning is : " << 1.0*clock()/1000 ;
    return 0;
}

 

*/
