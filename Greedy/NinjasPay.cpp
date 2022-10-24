#include<iostream>
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
bool cmp(int &a, int &b){
    if(a < b){
        return 1;
    }
    else if( a > b){
        return 0;
    }
    else{
        
    }
}
vector<int> minLoss(int n, vector<int> &time, vector<int> &loss){
    vector<int> ans;
    vector<int> temp;
    for(int i=0; i<n; i++){
        temp.push_back((time[i]/loss[i]));
    }
    sort(temp.begin(), temp.end(), cmp);

}


int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int> time(n);
      vector<int> loss(n);
      for(int i=0; i<n; i++){
        cin>>time[i];
      }
      for(int i=0; i<n; i++){
        cin>>loss[i];
      }
    minLoss(n, time, loss);
    }
}