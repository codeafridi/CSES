//kush to hua hai

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n , x;
        cin >> n >> x;
        vector<ll> array;
        array.push_back(x);
        for(ll i=0; i <n ; i++){
            ll gs;
            cin >> gs;
            array.push_back(gs);

        }
        array.push_back(x);
        n = array.size(); 
        ll max_distance;
        for(ll i=0; i <n; i++){
            if(i == n-1){
            max_distance = max(max_distance,(array[i+1] - array[i]) * 2);
            }
            else{
                max_distance = max(max_distance, array[i+1] - array[i]);
            }
        }
        cout << max_distance << "\n";
    }
    return 0;
}