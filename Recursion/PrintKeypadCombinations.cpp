#include<bits/stdc++.h>
using namespace std;
// generate all possible combinations of keypad for a given number 

vector<string> printkeypad(int nums){
    string arr[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> res;
    if(nums==0){
        res.push_back("");
        return res;
    }
    int lastdig = nums%10;
    int smallnum = nums/10;
    vector<string> smallans = printkeypad(smallnum);
    string options = arr[lastdig];
    for(int i=0; i<options.size(); i++){
        for(int j=0; j<smallans.size(); j++){
            res.push_back(smallans[j]+options[i]);
        }

    }
    return res;
}



int main(){
    int n;
    cin>>n;
    vector<string> res;
    res = printkeypad(n);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<endl;
    }
}