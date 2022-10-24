#include<bits/stdc++.h>
using namespace std;
//You are given an integer array pref of size n. Find an array arr of size n such that pref[i] = arr[0] XOR arr[i]
int main(){
    int n;
    cin>>n;
    vector<int> pref(n);
    for(int i=0; i<n; i++){
        cin>>pref[i];
    }
    vector<int> arr(n);
    arr[0] = pref[0];
    for(int i=1; i<n; i++){
        arr[i] = arr[i-1]^pref[i];

    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}