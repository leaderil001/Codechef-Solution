//Code by Sahil Kumar
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2){
            cout << "YES" << endl;
            for(int i = 1; i <= (n/2); i++)
            {
                cout << i << " ";
            }
            cout << n << " ";
            for(int i = n-1; i > (n/2); i--)
            {
                cout << i << " ";
            }
              cout << endl;
        }
else if(n != 2){
            cout << "YES" << endl;
            cout << (n/2) << " ";
            for(int i = 1; i < (n/2); i++){
                cout << i << " ";
            }
            for(int i = n; i > (n/2); i--){
                cout << i << " ";
            }
cout << endl;
        }
else{
            cout << "NO" << endl;

        }
    }

    
  return 0;
}