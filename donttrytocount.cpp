#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >>n>>m;
        string x,s;
        cin >> x>>s;
        string temp;
        if(s.find(x) != string::npos){
            cout<<0<<endl;
        }
        else {
            for(ll i=0;i<5;i++){
            x+=x;
            if(s.find(x) != string::npos){
                cout<<i+1<<endl;
                break;
            }
            }
            cout<<-1<<endl;
        }

    }
}