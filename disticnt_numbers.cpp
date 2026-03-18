#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n ; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll count = 0;
    for(ll i = 0; i<n ; i ++){
        if(v[i] != v[i+1]) count++;
    }
    cout << count;
    return 0;


}