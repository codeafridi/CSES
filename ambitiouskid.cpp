#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    ll arr[n];
    ll temp[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    ll count =0;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            cout << 0 << endl;
            return 0;
        }
        else{
            for(int j=0;j<n;j++){
                temp[j] = abs(arr[j]);
        }
        sort(temp,temp+n);
        mini = min(mini,(int)temp[0]);
    }
    cout << mini << endl;
    return 0;
}
}