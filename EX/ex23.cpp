#include<bits/stdc++.h>
#define ll long long int
#define vec vector<ll>
#define mat vector<vec>

using namespace std;

const ll mod=1000000007;
//const ll inf=LONG_LONG_MAX;
ll dx4[4]={1,0,-1,0};
ll dy4[4]={0,-1,0,1};
ll dx8[8]={1,0,-1,1,-1,1,0,-1};
ll dy8[8]={1,1,1,0,0,-1,-1,-1};

int main() {
  ll N;
  cin >> N;
  vec A(N+1);
  priority_queue<ll> Q;
  unordered_map<ll,ll> M;
  ll a;
  for( ll i=0; i<N; i++ ){
    cin >> a;
    
    if(M.count(a)){
      M.at(a)++;
    }else{
      M[a]=1;
    }
    A.at(M.at(a))=a;
    Q.push(M.at(a));
  }
  cout << A.at(Q.top()) << " " << Q.top() << endl;
}