#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        int un=n-a;
        if(un>a){
            cout<<a<<endl;
        }else if(a>un){
            cout<<un<<endl;
        }else{
            cout<<a<<endl;
        }

    }
	return 0;
}