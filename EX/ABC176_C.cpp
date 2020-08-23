#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> A = vector<int>(N);
  for(int i=0;i<N;i++){
    cin >> A.at(i);
  }
  int prev = 0;
  int64_t sum = 0;
  for(int i=0;i<N;i++){
    int d = prev - A.at(i);
    if(d > 0){
      sum+=d;
      A.at(i)+=d;
    }
    prev = A.at(i);
  }
  cout << sum;
}