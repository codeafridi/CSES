#include<bits/stdc++.h>
using namespace std; 
int main(){
    cout<<"Enter the number of elements in the array: "; 
    int n; 
    cin>>n;
    int arr[n];
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int best =0;
    for(int a=0;a<n;a++){
        int sum=0;
        for(int b=a;b<n;b++){
            sum+=arr[b];
            best=max(best,sum);        
        }
    }
    cout<<"The maximum sum of a contiguous subarray is: "<<best;
    return 0;
    }