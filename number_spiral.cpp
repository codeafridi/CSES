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
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long x,y;
        cin >> y>> x;
        long long layer = max (x,y);
        long long square = layer * layer;

        if (layer % 2 ==0){
            if (y == layer){
                cout << square - x +1 << "\n";
            }
            else{
                cout << ((layer - 1) * (layer -1)) + y << "\n";
            }
            
        }
        else {
            if (x == layer){
                cout << square - y +1 << "\n";
            }
            else {
                cout << ((layer - 1) * (layer -1)) + x << "\n";
            }
        }
    }
}