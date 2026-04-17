/*
Question : You are given a positive integer n. Print the number of trailing zeros in the factorial of n.
Input:
The only input line contains an integer n.
Output:
Print a single integer: the number of trailing zeros in the factorial of n.
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

int main() {
    long long n;
    cin >> n;

    long long count = 0;

    for(long long i = 5; i <= n; i *= 5) {
        count += n / i;
    }

    cout << count;
}