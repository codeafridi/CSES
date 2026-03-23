/*
Question : You are given a positive integer n. Print the numbers 1,2,...,n in such an order that the sum of any two adjacent numbers is not a square.

Input:
The only input line contains an integer n.

Output:
Print n numbers: the numbers 1,2,...,n in the order that satisfies the conditions. If there are several solutions, you can print any of them.

Example:
Input:
5
Output:
2 4 1 3 5
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout<<1;
    }
    else if(n == 2 || n == 3){
        cout<< "NO SOLUTION";
    }
    else {
        for (int i = 2; i<=n ; i+=2){
            cout << i << " ";
        }
        for(int i = 1; i <= n; i+=2){
            cout << i << " ";
        }
    }
}