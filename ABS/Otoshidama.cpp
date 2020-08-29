#include<bits/stdc++.h>
using namespace std;

int main() {
  int N,Y;
  cin>>N>>Y;
  int a,b,c,n;
  for(int i=N;i>=0;i--){
    a=Y-10000*i;
    if(a<0){
      continue;
    }
    n=N-i;
    for(int j=n;j>=0;j--){
      b=a-5000*j;
      if(b<0){
        continue;
      }
      c=b/1000;
      if(c==n-j){
        cout<<i<<" "<<j<<" "<<c<<endl;
        return 0;
      }
    }
  }
  cout<<"-1 -1 -1"<<endl;
  return 0;
}