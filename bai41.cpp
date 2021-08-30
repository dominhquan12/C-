#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;     
 
struct matrixx{
    ll c[2][2];
    matrixx(){
        c[0][0]=0;
        c[0][1]=1;
        c[1][0]=1;
        c[1][1]=1;
    }
};
 
int T;
ll n;
matrixx A;
 
matrixx operator * (matrixx a, matrixx b){
    matrixx res;
    for (int i=0; i<=1; i++)
        for (int j=0; j<=1; j++)
        {
            res.c[i][j] = 0;
            for (int k=0; k<=1; k++)
                res.c[i][j] = (res.c[i][j]+a.c[i][k]*b.c[k][j])%MOD;
        }
    return res;
}
 
matrixx powermod (matrixx a, ll n){
    if (n==1)
        return a;
    if (n%2!=0)
        return powermod(a,n-1)*a;
    matrixx tmp = powermod(a,n/2);
    return tmp*tmp;
}
 
void init(){
	cin >> n;
}
 
void process(){
	A = powermod(A,n);
    cout << A.c[0][1] << endl;
}
 
void clear_all(){
	A.c[0][0]=0;
    A.c[0][1]=1;
    A.c[1][0]=1;
    A.c[1][1]=1;
} 
 
int main(){
    cin >> T;
    while(T--){
    	clear_all();
	    init();
	    process();
	}
    return 0;
} 
