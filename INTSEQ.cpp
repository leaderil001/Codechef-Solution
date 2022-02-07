//Sahil Kumar
#include"bits/stdc++.h"
using namespace std;
void fastio() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define int ll
#define endl "\n"

signed main(){
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        ll c=0;
        while(k%2==0){
            k/=2;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}