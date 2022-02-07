#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;

        if(x<y && x<z)
        {
            cout<<"Nothing"<<endl;
        }
        else if(x>y){
            cout<<"Pizza"<<endl;
        }
        else{
            cout<<"Burger"<<endl;
        }

    }
    return 0;
}