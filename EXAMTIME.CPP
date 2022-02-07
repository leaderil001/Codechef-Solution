#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--)
    {

        int d1,t1,dm1;
        int d2,t2,dm2;

    cin>> d1>>t1>>dm1;
    cin>> d2>>t2>>dm2;

    int sum1 = d1+t1+dm1;
    int sum2 = d2+t2+dm2;

    if(sum1 > sum2)
    {
        cout<< "Dragon" <<endl;
    }
    else if(sum1 < sum2)
    {
        cout<< "Sloth" <<endl;
    }

    else if(sum1 = sum2)
    {

        if(d1 > d2)
        {
            cout<< "Dragon" <<endl;
        }
        else if (d1 < d2)
        {
            cout<< "Sloth" <<endl;
        }

        else if(d1 = d2)
        {
             if(t1>t2)
             {
                 cout<< "Dragon"<<endl;
             }
             else if (t1<t2)
             {
                 cout<< "Sloth" <<endl;
             }
             else
             {
                 if(dm1 >dm2)
                 {
                     cout<< "Dragon" <<endl;
                 }
                 else if(dm1 < dm2)
                 {
                     cout<< "Sloth" <<endl;
                 }
                 else
                 {
                 cout<< "Tie" <<endl;
                 }
             }
        }
    }
}
  return 0;
}