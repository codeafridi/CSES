
/*
Question : You are given n apartments and m customers. Each apartment has a size and each customer has a desired size. You want to assign each customer to an apartment such that the difference between the size of the apartment and the size of the customer is at most k.

Input:
The first line of the input contains three integers n, m and k (1≤n,m≤2⋅10^5, 1≤k≤10^9). The next line contains n integers a1,a2,...,an (1≤ai≤10^9). The next line contains m integers b1,b2,...,bm (1≤bi≤10^9).

Output:
Print a single integer: the maximum number of customers who can be assigned to apartments.

Example:
Input:
3 3 1
2 3 5
1 2 3
Output:
2
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,m,k;
    cin >> n >> m >> k;
    ll x[n], y[m];
    for (ll i =0 ; i < n; i++){
        cin >> x[i];

    }
    
    for (ll i =0 ; i < m; i++){
        cin >> y[i];
        
}
     
sort(x, x + n);
sort(y, y + m);

ll i = 0, j = 0, count = 0;

while (i < n && j < m) {
    if (abs(x[i] - y[j]) <= k) {
        count++;
        i++;
        j++;
    }
    else if (y[j] < x[i] - k) {
        j++;
    }
    else {
        i++;
    }
}
cout << count;
}


//there is doubt come again and check it