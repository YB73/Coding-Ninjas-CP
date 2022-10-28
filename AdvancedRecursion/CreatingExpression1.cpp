#include<bits/stdc++.h>
using namespace std;
bool exp(vector<int>&arr, int k, int i, int total){
    if(i == arr.size()){
        if(total == k){
            return true;
        }
        return false;
    }
   bool ans1 = exp(arr,k,i+1,total+arr[i]);
   if(ans1 == true){
    return true;
   }
   return exp(arr,k,i+1,total-arr[i]);
   
}




int main(){
    int n, x;
    cin>>n>>x;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int y;
        cin>>y;
        arr.push_back(y);


    }
    int total = arr[0];
    bool ans;
    ans = exp(arr, x, 1, total);
    if(ans){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}


