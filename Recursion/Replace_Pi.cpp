// replace all occurrences of pi with 3.14


#include<bits\stdc++.h>
using namespace std;
void help(char input[], int n){
    if(n == 0){
        return;
    }
    if(input[0] == 'p' && input[1] == 'i'){
        for(int i=n;i>1;i--){
            input[i+2] = input[i];
        }
         input[0] = '3';
         input[1] = '.';
         input[2] = '1';
         input[3] = '4';
      
    }
    else{
        help(input+1, n-1);
    }
}
void replacePi(char input[]){
    int n = strlen(input);
    help(input, n);

}

int main(){
    int n;
    cin>>n;
    char a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    replacePi(a);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}