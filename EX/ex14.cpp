#include <bits/stdc++.h>
using namespace std;
int main(){
  int A,B,C;
  cin >> A >> B >> C;
  int m = min(min(A,B),C);
  int mm = max(max(abs(A-m),abs(B-m)),abs(C-m));
  cout << mm << endl;
}