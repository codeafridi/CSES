#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> v(n);
        for(ll i=0; i< n; i++){
            cin >> v[i];
        }
        vector<ll> copy = v;
        sort(copy.begin() , copy.end());

        if(copy == v || k >1)
            cout<< "YES" << "\n";
        
        else
            cout<< "NO" << "\n";
    }
    return 0;
    
}