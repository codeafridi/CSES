// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     for(ll i = 0;i <n; i++){
//         cin >> v[i];
//     }
//     ll count=0;
//     for(ll i = 0;i<(ll)v.size();i++){
//         for(ll j = 1; j<=v[i]; j++){
//             if(v[i]%j == 0) count++;
//         }
//         cout<<count<<"\n";
//         count=0;
//     }
//     return 0;
// }

/*
Question : You are given a positive integer n. Print the number of divisors of each number from 1 to n.
Input:
The only input line contains an integer n.
Output:
Print n lines: the number of divisors of each number from 1 to n.
Example:
Input:
5
Output:
1
2
2
3
2
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
   

    ll n;
    cin >> n;

    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }

    for(ll i = 0; i < n; i++){
        ll count = 0;

        for(ll j = 1; j*j <= v[i]; j++){
            if(v[i] % j == 0){
                count++;
                if(j != v[i]/j) count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}