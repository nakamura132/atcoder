#include<bits/stdc++.h>
using namespace std;
int main(){
  int H,W,M;
  cin >> H >> W >> M;
  vector<vector<int> > field(H+1,vector<int>(W+1));
  vector<int> rows(H+1);
  vector<int> cols(W+1);
  for(int i=0;i<M;i++){
    int a,b;
    cin >> a >> b;
    rows.at(a)++;
    cols.at(b)++;
    field.at(a).at(b) = 1;
  }
  int max_r= *max_element(rows.begin(), rows.end());
  int max_c= *max_element(cols.begin(), cols.end());
  bool flag = false;
  for(int i=0;i<H+1;i++){
    if(rows.at(i) == max_r){
      for(int j=0;j<W+1;j++){
        if(cols.at(j) == max_c){
          if(field.at(i).at(j) == 0){
            flag = true;
            break;
          }
        }
      }
    }
    if(flag){
      break;
    }
  }
  if(flag){
    cout << max_r + max_c << endl;
  }else{
    cout << max_r + max_c -1 << endl;
  }

}