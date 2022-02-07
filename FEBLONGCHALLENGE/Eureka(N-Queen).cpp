/* Programmed by Sahil Shah
   C++ Template for Competitive Coding
*/   

#include<bits/stdc++.h>
using namespace std;
//#define ll long long
//#define FAST1 ios_base::sync_with_stdio(false);
//#define FAST2 cin.tie(NULL);
//#include <sys/resource.h>
//typedef long long ll;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
//#define pb push_back
//#define sz size()
//#define ff first
//#define ss second
//#define mod 1000000007 
//#define pie 3.14159265359
//const ll inf=1e15;
//#define minheap priority_queue<int , vector<int> , greater<int> > 
//#define maxheap priority_queue<int> 	
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) ;
//define debug(n) cout<<#n<<" "<<n<<"\n";
//#define pii pair<int,pair<int,int>>

//#define pi pair<int,int>

/*#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
#endif */

/*
#include <bits/stdc++.h> //works like magic, but at cost.
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for(i=0; i<n; i++)
#define Fo(i, k, n) for(i=k; i<n; i++)

template<typename... T>
void read(T&... args) {
	((cin >> args), ...);
}

template<typename... T>
void write(T&&... args) { //rvalue reference is new to C++ 
	((cout << args << " "), ...);
}

int main() {
	
	int x(100), y(200), z, zz;
	
	// cin >> x >> y >> z >> zz;
	read(x, y, z, zz);
	
	deb(x); //shortcut to duplicate a line
	deb(y); //shortcut to duplicate a line
	deb(z); //shortcut to duplicate a line
	deb(zz); //shortcut to duplicate a line
		
	
	cout << endl;
	int i, n;
	cin >> n;
	vector<int> arr(n, 0);
	fo(i, n)
		cin >> arr[i];
	
	Fo(i, 1, n+1) //shortcut to move a line as well
		cout << arr[i-1] << " " ;
	cout << endl;
	
	return 0;
}*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        float a,b;
        int r;
        a=(0.143*n);
        b=pow(a,n);
        r=pow(a,n);
        if(b-r<0.5){
        cout<<r<<endl;
        }
        else{
        cout<<r+1<<endl;
        }
    }
    return 0;
}
