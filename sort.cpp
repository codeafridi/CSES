/*
Question : You are given a sequence of n integers. You want to sort the sequence in increasing order. You are allowed to swap two adjacent elements any number of times.
Input:
The first line of the input contains an integer n (1≤n≤10^6). The next line contains n integers x1,x2,...,xn (1≤xi≤10^9).
Output:
Print a single line containing n integers: the sorted sequence.
Example:
Input:
5
3 1 2 4 5
Output:
1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {3,4,2,2,3,4,1,93,11,3,22,};
    sort(v.rbegin(),v.rend());
    for(int i : v){
        cout<<i<< " ";
    }
    return 0;
}