#include<bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin>>S;
  int index=0;
  while(index < S.size()){
    if(S.compare(index,11,"dreameraser")==0){
      index+=11;
      continue;
    }else if(S.compare(index,10,"dreamerase")==0){
      index+=10;
      continue;
    }else if(S.compare(index,7,"dreamer")==0){
      index+=7;
      continue;
    }else if(S.compare(index,5,"dream")==0){
      index+=5;
      continue;
    }else if(S.compare(index,6,"eraser")==0){
      index+=6;
      continue;
    }else if(S.compare(index,5,"erase")==0){
      index+=5;
      continue;
    }
    cout<<"NO"<<endl;
    return 0;
  }
  cout<<"YES"<<endl;
  return 0;
}