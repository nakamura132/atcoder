#include<bits/stdc++.h>
using namespace std;
int main(){
  int N,X,T;
  cin >> N >> X >> T;
  int ans = N/X;
  if( N%X != 0){
    ans++;
  }
  cout << ans*T << endl;
}