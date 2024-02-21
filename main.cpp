#include <bits/stdc++.h>
#include <math.h>
using namespace std;
float max(float a,float b,float c){
  if(a>b && a>c){return a;}
  else if(b>a && b>c){return b;}
  else{return c;}
}
int main(){
  int t; cin>>t;
  while(t--){
    float a,b,c; cin>>a>>b>>c;
    float m = max(a,b,c);
    cout<<m<<endl;
    if ((sqrt(m) == a) && ( sqrt(b)+sqrt(c) == sqrt(a))) {cout<<"YES"<<endl;}
else if ((sqrt(m) == b) && (sqrt(a)+sqrt(c)== sqrt(b))){ cout<<"YES"<<endl;}
else if ((sqrt(m) == c) && (sqrt(b)+sqrt(a)== sqrt(c))){ cout<<"YES"<<endl;}
else cout<<"NO"<<endl;
  }
}