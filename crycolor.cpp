#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n,i;
        cin>>n;
        int a[3][3];
        for(i=0;i<3;i++)
            cin>>a[i][0]>>a[i][1]>>a[i][2];
            if(a[0][0]==n && a[1][1]==n && a[2][2]==n)
            {
                cout<<0<<endl;
                continue;
            }
            
            int c= a[1][0]+a[2][0]+a[2][1];
            int b= a[0][1]+a[0][2]+a[1][2];
            
            if(c>b){
                cout<<c<<endl;
            }
            else{
                cout<<b<<endl;
            }
        
    }
    return 0;
}