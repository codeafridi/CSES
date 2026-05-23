#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        map<ll,ll>freq_map;
        for(int i=0;i<n;i++){
            freq_map[arr[i]]++;
    }
        
    if(freq_map.size() >= 3){
        cout<<"no"<<endl;
    }
    else{
        ll freq1 = freq_map.begin()-> second;
        ll freq2 = freq_map.rbegin()-> second;
        if(freq1 == freq2){
            cout<<"yes"<<endl;
    }
        else if(n%2 == 1 && abs(freq1 - freq2) == 1){
        cout<<"yes"<< endl;
    }
        else{
        cout<<"no"<<endl;
    }
}
}
return 0;
}