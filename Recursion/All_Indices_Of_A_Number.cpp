#include<bits\stdc++.h>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]){
    if(size = 0){
        return 0;
    }
    int c = allIndexes(input, size-1, x, output);
    if(input[size - 1] == x){
        output[c] = size-1;
       return c++;
    }
    else{
        return c;
    }


}

int main(){
    int n;
    cin>>n;
    int a[n];
    int o[n];
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    int x;
    cin>>x;
    allIndexes(a, n, x, o);
}