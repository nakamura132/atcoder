#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,a,b;
  cin>>n>>a>>b;
  int sum=0;
  for(int i=1;i<=n;i++){
    int tmp=0;
    int j=i;
    while(j>0){
      tmp+=j%10;
      j/=10;
    }
    if(tmp>=a && tmp<=b){
      sum+=i;
    }
  }
  cout << sum << endl;
  return 0;
}