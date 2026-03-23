/*
Question : You are given a sequence of n integers. You want to find the missing number in the sequence.
Input:
The first line of the input contains an integer n (1≤n≤10^6). The next line contains n integers x1,x2,...,xn (1≤xi≤10^9).
Output:
Print a single integer: the missing number in the sequence.
Example:
Input:
5
1 2 3 4 5
Output:
5
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long sum =0;
    for(long long i=0;i<n-1;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    long long total = (n*(n+1))/2;
    cout<<total-sum;
    return 0;
}