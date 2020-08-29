#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin>>N;
  vector<int>a(N);
  for(int i=0;i<N;i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end(),greater<int>());
  int s1=0,s2=0;
  for(int i=0;i<N;i++){
    if(i%2==0){
      s1+=a[i];
    }else{
      s2+=a[i];
    }
  }
  cout << s1-s2 << endl;
  return 0;
}