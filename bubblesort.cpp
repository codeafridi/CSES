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
#include <cstdlib>
using namespace std;
int main(){
    cout<<"enter the number of elements";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0 ; i<n; i++){
        for (int j=0 ; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }   
        }
    }
    cout<<"the sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}