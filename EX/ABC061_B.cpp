#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  int a,b;
  vector<int> vec(n);

  for(int i = 0; i < m; i++){
    cin >> a >> b;
    vec.at(a-1)++;
    vec.at(b-1)++;
  }
  for(int i = 0; i < n; i++){
    cout << vec.at(i) << endl;
  }
}