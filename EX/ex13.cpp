#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  int ave = 0;
  
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  for(int i = 0; i < N; i++){
    ave += vec.at(i);
  }
  ave /= N;
  for(int i = 0; i < N; i++){
    cout << abs(vec.at(i) - ave) << endl;
  }
}