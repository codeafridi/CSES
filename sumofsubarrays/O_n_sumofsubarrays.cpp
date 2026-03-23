/*
Question : You are given an array of n integers. You want to choose a contiguous subarray and maximize the sum of the elements in the subarray. However, you are not allowed to choose a subarray that contains both 5 and 6.

Input:
The first line of the input contains an integer n (1≤n≤10^6). The second line contains n integers x1,x2,...,xn (−10^9≤xi≤10^9).

Output:
Print a single integer: the maximum sum of the subarray.

Example:
Input:
5
1 2 3 4 5
Output:
15

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
     cout<<"enter the no of elements in the arrays";
     int n;
     cin>>n;
     int arr[n];
     cout<<"enter te elements in the arrays";
     for(int i=0;i<n;i++){
        cin>>arr[i];

     }   
     int best=0 , sum=0;
     for(int k=0;k<n;k++){
        sum=max(arr[k],sum+arr[k]);
        best=max(best,sum);
         }
         cout<<"The maximum sum of a contiguous subarray is: "<<best;
         return 0;
}