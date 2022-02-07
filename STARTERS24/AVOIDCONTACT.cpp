#include<iostream>
using namespace std;
int main(){


int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;

    if(y==0){
        cout<<x<<endl;
    }

    else if(x==y){
        cout<<2*x-1<<endl;
    }

    else{
        cout<<x+y<<endl;
    }
}
    return 0;


}