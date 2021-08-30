#include<bits/stdc++.h>
#include<string>
using namespace std;

const int MAX_CHAR = 26; 
  
// Function to return string in lexicographic 
// order followed by integers sum 
void arrangeString(string str) { 
    int char_count[MAX_CHAR] = {0}; 
	int sum = 0;
  
    // Traverse the string 
    for (int i = 0; i < str.length(); i++) { 
        // Count occurrence of uppercase alphabets 
        if (str[i]>='A' && str[i] <='Z') 
            char_count[str[i]-'A']++; 
  
        //Store sum of integers 
        else
            sum = sum + (str[i]-'0'); 
    } 
  
    string res = ""; 
  
    // Traverse for all characters A to Z 
    for (int i = 0; i < MAX_CHAR; i++) { 
        char ch = (char)('A'+i); 
  
        // Append the current character 
        // in the string no. of times it 
        //  occurs in the given string 
        while (char_count[i]--) 
            res = res + ch; 
    } 
    cout<<res;
  
    // Append the sum of integers 
    if (sum > 0) {
    	cout<<sum; 
	}
	cout<<endl; 

} 

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		arrangeString(s);
	}
	return 0;
}
