#include<bits/stdc++.h>
using namespace std;

int main() {
  string s,t;
  cin>>s>>t;
  int mx = 0;
  for(int i=0;i<=s.length()-t.length();i++){
    int cnt=0;
    for(int j=0;j<t.length();j++){
      if(s[i+j]==t[j]) cnt++;
    }
    mx = max(mx,cnt);
  }
  cout<<t.length()-mx<<endl;
  return 0;
}