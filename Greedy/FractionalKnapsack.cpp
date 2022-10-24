#include<bits/stdc++.h>
#include<numeric>
#define ll long long 
using namespace std;

static bool compare(pair<ll, ll>&a, pair<ll, ll>&b){
    double r1 = double(a.first)/a.second;
    double r2 = double(b.first)/b.second;
    return r1 > r2;
}




int main(){
int N, W;
cin>>N>>W;
vector<pair<ll, ll>>item(N);
for(ll i=0; i<N; i++){
    cin>>item[i].first>>item[i].second;
    

}
sort(item.begin(), item.end(), compare);
ll currWeight = 0;
double finalValue = 0.0;
for(int i=0; i<N; i++){
    if(currWeight + item[i].second <=W){
        currWeight += item[i].second;
        finalValue += double(item[i].first);
    }
    else{
        ll remain = W - currWeight;
        finalValue += double(item[i].first) * ((double)(remain)/item[i].second);
        break;

    }

}
cout<<finalValue;







}