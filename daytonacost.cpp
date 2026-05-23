#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,common;
        cin >>n>>common;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==common){
                count++;
                break;
            }
        }
        if(count==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
    }
