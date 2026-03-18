//this problem is incorrect analyse it again


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;

    for(int i = 0; i < n; i++){
        int count = 1;

        // go left
        int mx = 0;
        for(int j = i-1; j >= 0; j--){
            mx = max(mx, v[j]);
            if(mx < v[i]) count++;
            else break;
        }

        // go right
        mx = 0;
        for(int j = i+1; j < n; j++){
            mx = max(mx, v[j]);
            if(mx < v[i]) count++;
            else break;
        }

        ans = max(ans, count);
    }

    cout << ans;
}
//this is incorrect do it again
