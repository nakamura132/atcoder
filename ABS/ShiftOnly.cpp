#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int mx = numeric_limits<int>::max();
  for( int i=0; i<N; i++ ){
    int n,m=1,c=0;
    cin >> n;
    while((n&m)==0){
      m <<= 1;
      c++;
    }
    mx = min(mx,c);
  }
  cout << mx << endl;
  return 0;
}