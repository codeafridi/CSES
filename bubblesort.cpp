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