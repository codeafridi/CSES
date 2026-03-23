//Brute force approach O(n^2) 

/*
Question : You are given a sequence of n integers and a target sum x. You want to find two numbers in the sequence that add up to x.
Input:
The first line of the input contains two integers n and x (1≤n≤10^6, 1≤x≤10^9). The next line contains n integers x1,x2,...,xn (1≤xi≤10^9).
Output:
Print two integers: the indices of the two numbers. If there are multiple solutions, you can print any of them. If there are no solutions, print "IMPOSSIBLE".
Example:
Input:
5 9
2 7 11 15 18
Output:
1 2
*/

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