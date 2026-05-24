#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];

        }
        ll min1 = INT_MAX;
        ll max1 = INT_MIN;
        for(int i=0;i<n;i++){
             min1 = min((int)min1 , arr[i]);
             max1 = max((int)max1 , arr[i]);
        }
        cout << ceil((double)(max1 - min1) / 2.0) << endl;
    }
    return 0;
}