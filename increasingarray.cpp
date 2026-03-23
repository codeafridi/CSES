/*
Question : You are given a sequence of n integers. You want to make the sequence strictly increasing by increasing the elements of the sequence. You are allowed to increase the elements of the sequence by 1 any number of times.
Input:
The first line of the input contains an integer n (1≤n≤10^6). The next line contains n integers x1,x2,...,xn (1≤xi≤10^9).
Output:
Print a single integer: the minimum number of moves required to make the sequence strictly increasing.
Example:
Input:
5
3 1 2 4 5
Output:
2
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n; 
    cin >> n;
    ll arr[n];
    for(ll i =0 ; i<n ; i++){
        cin >> arr[i];
    }
    ll moves = 0;
    for(ll i = 1; i< n ; i++){
        if(arr[i] < arr [i-1]){
            moves += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << moves;
}//hey