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