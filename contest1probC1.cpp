#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i] > 0){
                count++;
            }
            

    }
    for(int j=0; j<count; j++){
        arr[j] = -arr[j];
    }
}
}