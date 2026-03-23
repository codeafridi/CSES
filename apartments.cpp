#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,m,k;
    cin >> n >> m >> k;
    ll x[n], y[m];
    for (ll i =0 ; i < n; i++){
        cin >> x[i];

    }
    ll count = 0;
    for (ll i =0 ; i < m; i++){
        cin >> y[i];
        
}
for(ll i =0 ; i < m ; i++){
    if(y[i] - k <= x[i] && y[i] + k >= x[i]){
        count++;
    }
}
cout << count;
return 0;
}