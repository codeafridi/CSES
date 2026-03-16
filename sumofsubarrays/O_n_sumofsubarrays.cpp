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