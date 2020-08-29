#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin>>N;
  map<int,int>mm;
  int c;
  for(int i=0;i<N;i++){
    cin>>c;
    if(!mm.count(c)){
      mm[c]=1;
    }
  }
  cout<<mm.size()<<endl;
  return 0;
}