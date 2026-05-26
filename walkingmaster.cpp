#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long k = d - b;

        // y cannot decrease
        if(k < 0) {
            cout << -1 << endl;
            continue;
        }

        // after k diagonal moves
        long long x = a + k;

        
        if(c > x) {
            cout << -1 << endl;
            continue;
        }

        
        long long left = x - c;

        cout << k + left << endl;
    }
}