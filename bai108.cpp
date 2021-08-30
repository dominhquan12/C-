#include<bits/stdc++.h> 
using namespace std;

int dem(int a[],int n,int k){ 
    int count=0; 
    sort(a,a+n);   
    for(int i=0;i<n;i++){ 
        int j=i+1;  
        while(j<n&&a[j]-a[i]<k){ 
            count++; 
            j++; 
        } 
    }   
    return count; 
} 

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int a[100000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		nhap(a,n);
		cout<<dem(a,n,k)<<endl;
	}
	return 0;
}


/*

#include<bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long i64;
int n,k;
vector < int > a;
void input(){
    cin >> n >> k;
    a.resize(n);
    for(int i = 0 ; i < n;  i++){
        cin >> a[i];
    }
}
void solve(){
    sort(a.begin(),a.end());
    i64 res = 0;
    for(int i = 0 ; i < n - 1 ; i++){
        int id = upper_bound(a.begin(),a.end(),a[i] + k - 1) - a.begin();
        res += 1LL*(id - 1 - i);
        //cout << i << ' ' << id << endl;
    }
    cout << res << endl;
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
