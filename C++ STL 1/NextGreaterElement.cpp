// for every element in an array print the next greater element in the array.
// consider -1 as the next greater if no such element exists.
#include<bits\stdc++.h>
#include<queue>

using namespace std;


int main(){
    int n;
    cout<<"Enter number of elements in the array: "<<endl;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    priority_queue<int, vector<int>, decltype<cmp>> pq_cmp(cmp);
    for(int i=0; i<n; i++){
        pq_cmp.push(v[i]);

    }
    while(!pq_cmp.empty()){
        cout<<pq_cmp.top()<<" ";
        pq_cmp.pop();
    }
}