#include<bits\stdc++.h>
using namespace std;
vector<int> kLargest(int arr[], int n, int k) {
    // Write your code here
    priority_queue<int> pqm;
    for(int i=0; i<n; i++){
        pqm.push(arr[i]);
    }
    vector<int> v;
    for(int i=0; i<k; i++){
        v.push_back(pqm.top());
        pqm.pop();
    }
    return v;
}


int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        
    }
   vector<int> v = kLargest(a, n, k);
   for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
   }
   
}