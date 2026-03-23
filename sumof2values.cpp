//Brute force approach O(n^2) 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,x;
    cin >> n >> x;
    ll arr[n];
    for(ll i =0 ; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(ll i =0 ; i<n; i++){
        for(ll j =i+1 ; j<n; j++){
            if(arr[i]+arr[j] == x){
                cout << i+1 << " " << j+1;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}

//do it again in O(n) time complexity