#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define ll long long 
using namespace std;
bool check(vector<ll> &h, ll m, ll mid){
    ll sum = 0;
    int n = h.size();
    for(int i=0; i<n; i++){
        if(h[i]-mid>0) sum += (h[i] - mid);
    }
    return (sum>=m);
}

void solve(){
    ll n; // number of trees
    ll m; // atleast m meters of wood
    cin>>n>>m;
    vector<ll> h(n);
    for(int i=0; i<n; i++){
        cin>>h[i];
    }
    sort(h.begin(), h.end());
    ll ans = 0;
    ll left = 1, right = *max_element(h.begin(), h.end());
    while(left<=right){
        ll mid = left + (right-left)/2;
        if(check(h,m,mid)){
            ans = mid;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout<<ans;

}





int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cout<<fixed;
  cout<<setprecision(10);
  int t=1;
   
   for(int i=1;i<=t;i++){
    solve();
   }
   return 0;
}