#include<bits/stdc++.h>
bool ispossible(vector<int> &t, int n,int mid){
    int pincount=1;
   int time=0;

   
   for(int i = 0; i<t.size(); i++) {
       if(time + t[i] <= mid) {
            time+= t[i];
       }
       else
       {
          pincount ++;
           if( pincount> n || t[i] > mid ) {
           return false;
       }
           time = t[i];
       }
       if(pincount > n) {
           return false;
       }
      
   }
   return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
  int s=0;
   int ans =-1;
   int sum=0;
   for(int i=0;i<boards.size();i++){
       sum +=boards[i];
       
   }
   int e=sum;
    int mid=s+(e-s)/2;
   while(s<=e){
       if(ispossible(boards,k,mid)){
           ans=mid;
           e=mid-1;
           
           
       }
       else{
           s=mid+1;
       }
       mid=s+(e-s)/2;
       
   }
   return ans;
}