/*
Question : You are given a sequence of n integers. You want to find the maximum number of peaks in the sequence.
Input:
The first line of the input contains an integer n (1≤n≤10^6). The next line contains n integers x1,x2,...,xn (1≤xi≤10^9).
Output:
Print a single integer: the maximum number of peaks in the sequence.
Example:
Input:
5
1 2 3 4 5
Output:
5
1 2 3 4 5
Output:
5
*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;

    for(int i = 0; i < n; i++){
        int count = 1;

        // go left
        int mx = 0;
        for(int j = i-1; j >= 0; j--){
            mx = max(mx, v[j]);
            if(mx < v[i]) count++;
            else break;
        }

        // go right
        mx = 0;
        for(int j = i+1; j < n; j++){
            mx = max(mx, v[j]);
            if(mx < v[i]) count++;
            else break;
        }

        ans = max(ans, count);
    }

    cout << ans;
}
//this is incorrect do it again alright
