#include<iostream>
#include<vector>
using namespace std;

vector<vector<bool>> seen;
bool get_goal = false;


bool is_on_board(const int &H, const int &W, const int &h, const int&w){
  if( h < 0 || h >= H || w < 0 || w >= W ) return false;
  return true;
}
void dfs(const vector<vector<int>> &G, const int &H, const int &W, int h, int w){
  if( !is_on_board(H,W,h,w)) return;
  if( seen[h][w] ) return;
  seen[h][w] = true;
  if(G[h][w] == 1) return;
  if(G[h][w] == 3){
    get_goal=true;
    return;
  }
  dfs(G,H,W,h-1,w);
  dfs(G,H,W,h+1,w);
  dfs(G,H,W,h,w-1);
  dfs(G,H,W,h,w+1);
}
int main(){
  int H,W; cin>>H>>W;
  vector<vector<int>> G(H,vector<int>(W,0));
  pair<int,int> start,end;
  // 0:'.' 1:'#', 2:'s', 3:'g'
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      char c; cin>>c;
      if( c=='#') {
        G[i][j]=1;
      }else if( c=='s'){
        G[i][j]=2;
        start.first=i; start.second=j;
      }else if( c=='g'){
        G[i][j]=3;
        end.first=i; end.second=j;
      }
    }
  }
  seen.assign(H,vector<bool>(W,false));
  dfs(G,H,W,start.first,start.second);
  if(get_goal) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}