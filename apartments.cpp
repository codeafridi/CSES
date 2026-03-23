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
    
    for (ll i =0 ; i < m; i++){
        cin >> y[i];
        
}
     
sort(x, x + n);
sort(y, y + m);

ll i = 0, j = 0, count = 0;

while (i < n && j < m) {
    if (abs(x[i] - y[j]) <= k) {
        count++;
        i++;
        j++;
    }
    else if (y[j] < x[i] - k) {
        j++;
    }
    else {
        i++;
    }
}
cout << count;
}


//there is doubt come again and check it