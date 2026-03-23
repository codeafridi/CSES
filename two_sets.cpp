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

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    vector<ll> set1,set2;
    ll sum = n*(n+1)/2;
    ll half = sum/2;
    if (sum % 2 != 0){
        cout << "NO";
        return 0;
    }
    else{
        cout << "YES" << endl;
        for(ll i=n ; i>=1; i--){
            if(half >= i){
                set1.push_back(i);
                half -=i;

            }
            else{
                set2.push_back(i);
            }
        }
    }
   cout << set1.size() << endl;
   for(ll i : set1) cout << i << " ";
   cout << "\n";
   cout << set2.size() << endl;
   for(ll i : set2) cout << i << " ";   

}