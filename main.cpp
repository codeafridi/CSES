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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int x;
        cin >> x;
        cout << x * 2 << "\n";
    }

    return 0;
}