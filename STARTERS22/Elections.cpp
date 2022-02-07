/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int Xa,Xb,Xc;
        cin>>Xa>>Xb>>Xc;

        if(Xa>50){
            cout<<"A"<<endl;
        }

        else if(Xb>50){
            cout<<"B"<<endl;
        }

        else if(Xc>50){
            cout<<"C"<<endl;
        }

        else{
            cout<<"NOTA"<<endl;
        }

    }
    return 0;
}