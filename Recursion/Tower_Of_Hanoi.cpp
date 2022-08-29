// given 3 rods and a set of n disks

#include<bits\stdc++.h>
using namespace std;


int main(){
  vector<int>vect;
  int n;
  cin>>n;
for(int i=0;i<n;i++){
vect.insert(vect.begin(),1);
}

  for(int i=0;i<n;i++){
    cout<<vect[i]<<" ";
  }  

}