//Code By Sahil Shah

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--){
    
        int x,a,b;
        cin>>x>>a>>b;
        if(x%a==0)
        {
            int p=x/a;
            int div=b*p;
            int sum=0;
            for(int i=1;i<=sqrtl(div);i++)
            {
                if(sum>x)
                break;
                if(div%i==0)
                {
                    sum=sum+i;
                    if(div/i!=i)
                    sum=sum+div/i;
                }
            }
            if(sum!=x)
            {
                cout<<-1<<"\n";
            }
            else
            cout<<div<<"\n";
        }
        else
        cout<<-1<<"\n";
    }
    return 0;
}