#include<bits/stdc++.h>
using namespace std;
int main(){
  int N,M;
  cin >> N >> M;
  vector<vector<char> > tbl = vector<vector<char> >(N,vector<char>(N,'-'));
  for(int i=0;i<M;i++){
    int a,b;
    cin >> a >> b;
    tbl.at(a-1).at(b-1) = 'o';
    tbl.at(b-1).at(a-1) = 'x';
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout << tbl.at(i).at(j);
      if( j<N-1){
        cout << ' ';
      }
    }
    cout << endl;
  }
}