#include<bits/stdc++.h>
bool ispossible(vector<int> &stalls, int k, int mid){
     int cowscount=1;
   int lastpos=stalls[0];
   for(int i=0;i<stalls.size();i++){
       if(stalls[i]-lastpos>=mid){
           cowscount++;
           if(cowscount==k){
               return true;
           }
           lastpos=stalls[i];
       }
   }
   return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int lo = 0, high = 1;
    for(int i=0; i<stalls.size(); i++){
        high=max(high,stalls[i]);
    }
    int hg = high;
    int ans=-1;
    while(lo<=hg){
        int mid = (lo+hg)/2;
        if(ispossible(stalls,k,mid)){
            ans=mid;
            lo=mid+1;
        }
        else{
            hg=mid-1;
        }
    }
    return ans;
    
}