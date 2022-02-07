#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(b%a==0)
        {
            cout<<b/a;
        }
        else
        {
            int q=b/2;
            while(q!=0)
            {   int t=b%q;
                if(int(t|q)==a)
                {
                    break;
                }
                q-=1;
            }
            if(q!=0)
            cout<<b/q+1;
            else
            cout<<-1;
        }
        cout<<endl;
    }
return 0;
}