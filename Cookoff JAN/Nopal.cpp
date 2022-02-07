#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){

        int n,k=0;
        cin>>n;
        string s="";

        char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

        for(int i=0;i<n;i++){
            if(k==25){
                k=0;
            }
            s+= a[k];
            k++;
        }
        cout<<s<<endl;
    }
    return 0;
}