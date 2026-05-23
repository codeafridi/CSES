#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i= 0; i<n ; i++){
            cin >> v[i];
        }
        if(v[0] == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }   
    }
    return 0;
}