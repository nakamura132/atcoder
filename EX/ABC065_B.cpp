#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i=0;i<N;i++){
    cin >> a.at(i);
  }
  int j = 0;
  int c = 0;
  while( j != 1 && c < N){
    j = a.at(j)-1;
    c++;
  }
  if( c >= N ){
    c = -1;
  }
  cout << c;
}