#include<bits\stdc++.h>
#include<utility>
using namespace std;


int main(){
    int p;
    cout<<"Enter the number of tshirts: "<<endl;
    cin>>p;
    int pi[p];
    for(int i=0; i<p; i++){
        cin>>pi[i];
    }
    int a;
    cout<<"Enter the front colors: "<<endl;
    cin>>a;
    int ai[a];
    for(int i=0; i<a; i++){
        cin>>ai[i];
    }
    int b;
    cout<<"Enter the back colors: "<<endl;
    cin>>b;
    int bi[b];
    for(int i=0; i<b; i++){
        cin>>bi[b];
    }
    int m;
    cout<<"Enter the number of buyers: "<<endl;
    cin>>m;
    int c[m];
    for(int i=0; i<m; i++){
        cin>>c[i];
    }
    vector<int> v(m, -1);
    vector<int> taken(p , 0);
    pair<pair<int, int>, int> price_c[p];
    for(int i=0; i<p; i++){
        price_c[i].first.first = ai[i];
        price_c[i].first.second = bi[i];
        price_c[i].second = pi[i];
    }
    
    sort(price_c, price_c+p, [](pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
        return a.second < b.second;
    });
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            if((price_c[j].first.first == c[i] || price_c[j].first.second == c[i]) && taken[j] == 0){
                v[i] = price_c[j].second;
                 taken[j] = 1;
                 break;
            }
            else{
                continue;
            }

        }

    }
    for(int i=0; i<m; i++){
        cout<<v[i]<<" ";
    }

}