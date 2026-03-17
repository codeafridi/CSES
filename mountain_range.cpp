#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i<n; i ++){
        cin >> v[i];
    }
    ll  temp = 0;
    
    for(ll i = 0; i<n; i ++){
        ll count = 1;
        for(ll j=i-1 ; j>=0 ; j--){
            if(v[j] < v[i]) count ++;
            else break;
        }
        for(ll j = i+1 ; j<n ; j++){
            if(v[j] < v[i]) count ++;
            else break;
        }
        temp = max(count,temp);
    }
   cout << temp;
    
    return 0;
} 
