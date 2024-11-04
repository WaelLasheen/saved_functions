#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int mod=1000000007;

ll fastPower(ll n,ll m){
    ll res=1;
    while(m){
        if(m&1){
            res=(res*n)%mod;
        }

        m >>=1;
        n = (n*n)%mod;
    }

    return res;
}



int main() {
    fastIO();
    ll n,m;
    cin>>n>>m;

    cout<<fastPower(n,m);
    return 0;
}

// 6 3 10 5 16 8 4 2 1   
