#include<bits/stdc++.h>
using namespace std;
int complete_time(vector<vector<int> > &children, int x){
  int y=0;
  for(int c : children.at(x)){
    y = max(complete_time(children, c)+1,y);
  }
  return y;
}
int main(){
  int N;
  cin >> N;

  vector<int> p(N);
  p.at(0) = -1;
  for(int i=1;i<N;i++){
    cin >> p.at(i);
  }

  vector<vector<int> > children(N);
  for(int i=1;i<N;i++){
    int parent = p.at(i);
    children.at(parent).push_back(i);
  }
  cout << complete_time(children, 0) << endl;
}