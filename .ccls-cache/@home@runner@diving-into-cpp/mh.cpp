#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int max(int a,int b,int c){
  if(a>b && a>c){return a;}
  else if(b>a && b>c){return b;}
  else{return c;}
}
int main(){
  int t; cin>>t;
  while(t--){
    int a,b,c; cin>>a>>b>>c;
    int m = max(a,b,c);
    if (sqrt(m) == sqrt(a+b+c-max(a,b,c)) ) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
  }
}