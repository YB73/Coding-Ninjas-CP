#include<bits/stdc++.h>
using namespace std;
string reverseString(string str){
    int n = str.length();
    int s = 0;
    int e = n-1;
    while(s < e){
        swap(str[s], str[e]);
        s++;
        e--;
    }
    return str;
}
int main(){
   string str;
   getline(cin, str);
   string res = reverseString(str);
   cout<<res;
}