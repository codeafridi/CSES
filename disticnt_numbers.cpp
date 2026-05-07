/*
Question : You are given a sequence of n integers. You want to find the number of distinct numbers in the sequence.
Input:
The first line of the input contains an integer n (1≤n≤10^6). The next line contains n integers x1,x2,...,xn (1≤xi≤10^9).
Output:
Print a single integer: the number of distinct numbers in the sequence.
Example:
Input:
5
1 2 3 4 5
Output:
5

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    long long count = 1;
    for(int i = 1; i < n; i++){
        if(v[i] != v[i-1]) count++;
    }

    cout << count;
}