#include<bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c,x,y,z;
  cin >> a >> b >> c >> x;
  int ans = 0;
  for(int i = a; i >= 0; i--){
    y = x - 500 * i;
    for(int j = b; j >= 0; j--){
      z = y - 100 * j;
      if( z < 0 ){
        continue;
      }
      if( z / 50 <= c ){
        ans++;
      }else{
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}