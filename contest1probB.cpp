#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        for(int i=0;i<n;i++){
            cin >> b[i];
        }

        ll sum = 0;
        ll maxi = 0;

        for(int i=0;i<n;i++){
            ll big = max(a[i], b[i]);
            ll small = min(a[i], b[i]);

            sum += big;
            maxi = max(maxi, small);
        }

        cout << sum + maxi << endl;
    }

    return 0;
}