#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll t;
    cin >> t;

    while(t--){

        ll n,m;
        cin >> n >> m;

        string x,s;
        cin >> x >> s;

        bool found = false;

        if(x.find(s) != string::npos){
            cout << 0 << endl;
        }

        else{

            for(ll i=1;i<=5;i++){

                x += x;

                if(x.find(s) != string::npos){

                    cout << i << endl;
                    found = true;
                    break;
                }
            }

            if(!found){
                cout << -1 << endl;
            }
        }
    }

    return 0;
}