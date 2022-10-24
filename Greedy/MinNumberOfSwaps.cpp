#include<bits/stdc++.h>
#include<string.h>
#include<numeric>
using namespace std;

int minSwap(int N, int M, int K, string &S, vector<char> &arr){
    map<char, int> al;
    for(char ch : arr){
        al[ch]++;
    }
    int i=0, c=0;
    while(i<K){
        map<char, int> temp;
        int cn=0;
        int mx=0;
        for(int j=i;j<N;j+=K){
            cn++;
            if(al.find(S[j])!=al.end()){
                temp[S[j]]++;
                mx=max(mx, temp[S[j]]);
            }
        }
        c+=cn-mx;
        i++;
    }
    return c;

// create a map of all the characters in the string 
// and their frequency
// create a map of all the characters in the array and their frequency
// create a temp map to store the frequency of the characters in the string
// create a variable to store the number of characters in the string
// create a variable to store the maximum frequency of the characters in the string
// 
}
int main(){
    int N;
    cin>>N;
    string S;
    for(int i=0; i<N; i++){
        cin>>S[i];
    }
    int M;
    cin>>M;
    vector<char> arr(M);
    for(int i=0; i<M; i++){
        cin>>arr[i];
    }
    int K;
    cin>>K;
    cout<<minSwap(N, M, K, S, arr);
    return 0;
}
