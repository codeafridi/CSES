#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0;i <n; i++){
        cin >> v[i];
    }
    ll count=0;
    for(ll i = 0;i<(ll)v.size();i++){
        for(ll j = 1; j<=v[i]; j++){
            if(v[i]%j == 0) count++;
        }
        cout<<count<<"\n";
        count=0;
    }
    return 0;
}