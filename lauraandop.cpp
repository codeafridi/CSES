#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >>t;
    while(t--){
        ll a,b,c;
        cin >> a>>b>>c;
        if((b % 2) == (c % 2))
        cout << 1 << " ";
    else
        cout << 0 << " ";

    // only 2s possible?
    if((a % 2) == (c % 2))
        cout << 1 << " ";
    else
        cout << 0 << " ";

    // only 3s possible?
    if((a % 2) == (b % 2))
        cout << 1 << endl;
    else
        cout << 0 << endl;
    }
}