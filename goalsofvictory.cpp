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
        for(int i=0;i<n-1;i++){
            cin >> arr[i];
        }
        ll sum=0;
        for(int i=0;i<n-1;i++){
            sum+=arr[i];
        }
        cout<< -1 * sum << endl;    
    }
    return 0;
}