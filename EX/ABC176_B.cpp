#include<bits/stdc++.h>
using namespace std;
int main(){
  string N;
  cin >> N;
  long sum=0;
  for(int i=0;i<(int)(N.size());i++){
    char c = N.at(i);
    int n= c-'0';
    sum+=n;
  }
  //cout << sum << endl;
  if(sum%9 == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}