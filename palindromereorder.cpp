#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin >> s;
    map<char,int> freq;
    for(int i=0;i<(int)s.size(); i++){
        freq[s[i]]++;
    }
     int odd=0;
     for(auto it : freq){
        if(it.second % 2 == 1) odd++;
        if(odd > 1){
            cout << "NO SOLUTION";
            return 0;
        }   
     }
     string first = "", middle = "", last = "";
     for(auto it : freq){
        
            for(int i=0;i<it.second/2;i++){
                first += it.first;
            }
            if(it.second%2==1){
                middle += it.first;
            }
        
     }
     for(int i=(int)first.size()-1;i>=0;i--){
        last+=first[i];

     }
     cout << first << middle << last;
     return 0;
}
