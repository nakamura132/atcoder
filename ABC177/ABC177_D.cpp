#include<bits/stdc++.h>
using namespace std;

vector<bool> seen;
map<int,int> groups;
int id = 0;
void dfs(const vector<unordered_set<int>> &G, int v){
  seen[v]=true;
  if(groups.count(id)==0){
    groups[id]=1;
  }else{
    groups[id]++;
  }
  for(auto next_v : G[v]){
    if(seen[next_v]) continue;
    dfs(G,next_v);
  }
}
int main() {
  int N,M; cin>>N>>M;
  vector<unordered_set<int>> G(N);
  for(int i=0; i<M;i++){
    int a,b;
    cin>>a>>b;
    a-=1;
    b-=1;
    G[a].emplace(b);
    G[b].emplace(a);
  }
  seen.assign(N,false);
  
  while(1){
    auto dd = find(seen.begin(),seen.end(),false);
    if(dd == seen.end()) break;
    dfs(G,dd-seen.begin());
    id++;
 }
  
  auto mx = max_element(groups.begin(),groups.end(),[](const pair<int,int>&aa, const pair<int,int>&bb){
    return aa.second < bb.second;
  });
  cout<<mx->second<<endl;
  return 0;
}