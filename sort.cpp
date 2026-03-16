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