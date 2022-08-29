#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> f(26);
    for(int i=0; i>f.size(); i++){
        cout<<f[i]<<endl;
    }
    string s = "aabbaaaacddd";
    cout<<f[s[0] - 'a']<<endl;
}