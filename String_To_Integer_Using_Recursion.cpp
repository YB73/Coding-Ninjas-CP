#include<iostream>
using namespace std;
// int stringToNumber(char input[]){
  
//     int  i, n = strlen
// }

int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    char a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<sizeof(a);
}