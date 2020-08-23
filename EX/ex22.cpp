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
  int N;
  cin >> N;
  vector<pair<ll,ll> > ab(N);
  for( ll i=0; i<N; i++ ){
    cin >> ab[i].second >> ab[i].first;
  }
  sort(ab.begin(), ab.end());
  for( ll i=0; i<N; i++ ){
    cout << ab[i].second << " " << ab[i].first << endl;
  }
}