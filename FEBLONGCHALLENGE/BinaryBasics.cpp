int main(void) {
  int t;
  cin>>t;
  while(t--)
  {
      int n,k;
     cin>>n>>k;
      char s[10000];
      cin>>s;
    
      int l=0;
      int h=n-1;
      int c=0;
      while(h>l)
      {
          if(s[l]!=s[h])
          c++;
          l++;
          h--;
      }
      if(n%2)
      {
          if(c<=k)
          {
             cout<<"YES"<<endl;
          }
          else
          cout<<"NO"<<endl;
      }
      else
      {
          if(c<=k && (k-c)%2==0)
          {
             cout<<"YES"<<endl;
          }
          else
          cout<<"NO"<<endl;
      }
      
      
  }
  return 0;
}