#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin>>N;
  vector<tuple<int,int,int>> points(N);
  int t,x,y;
  int time=0,px=0,py=0;
  int distance;
  for(int i=0;i<N;i++){
    cin>>t>>x>>y;
    points[i]=make_tuple(t,x,y);
  }
  for(int i=0;i<N;i++){
    t=get<0>(points[i]);
    x=get<1>(points[i]);
    y=get<2>(points[i]);
    distance=abs(px-x)+abs(py-y);
    if(distance > t - time ||
    (distance - (t - time)) % 2 != 0){
      cout<<"No"<<endl;
      return 0;
    }
    px=x;py=y;time=t;
  }
  cout<<"Yes"<<endl;
  return 0;
}