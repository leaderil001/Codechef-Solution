//code by sahil shah

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int i,j,k,l,p,q,n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==1){
        cout<<"NO\n";
        return;
    }
    map<char,int>m;
    vector<pair<int,char>>v;
    for(i=0;i<n;i++)
        m[s[i]]++;
    for(auto x: m){
        v.push_back(make_pair(x.second,x.first));
    }
    
    sort(v.begin(),v.end());
    string r="";
    for(i=0;i<v.size();i++){
        p=v[i].first;
        if(p>(n/2)){
            cout<<"NO\n";
            return;
        }
        
        for(j=0;j<p;j++){
            r+=v[i].second;
        }
    }
    j=n/2;
    i=0;
    j--;
    char c;
    while(i<j){
        c=r[i];
        r[i]=r[j];
        r[j]=c;
        i++;j--;
    }
    cout<<"YES\n"<<r<<"\n";
    
}

int main()
{
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
