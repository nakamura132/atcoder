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

map<string, int> nlist;
map<string,vector<int>> vlist;

void print_vec(const vector<int> &ve){
  cout << "[ ";
  for( ll i=0; i<ve.size(); i++ ){
    cout << ve.at(i) << " ";
  }
  cout << "]" << endl;
}
int calc_int(){
  bool mode = false;
  int ret = 0;
  string ope = "";
  int num = 0;
  while(1){
    
    string s;
    cin >> s;
    if( s == ";"){
      break;
    }
    if(mode){
      ope = s;
    }else{
      if( nlist.count(s) != 0){
        num = nlist[s];
      }else{
        num = stoi(s);
      }
      if( ope == "-"){
        num *= -1;
      }
      ret += num;
    }
    mode = !mode;
  }
  return ret;
}
vector<int> calc_vec(){
  bool mode = false;
  bool isout = true;
  vector<int> ret;
  string ope = "";
  vector<int> vtmp;
  int tmpidx = 0;
  int tmpnum = 0;
  while(1){
    string s;
    cin >> s;
    if( s == ";"){
      break;
    }
    if( s == "["){
      isout = false;
      tmpidx = 0;
      vtmp.clear();
    }else if( s == "]"){
      isout = true;
      if( ope == ""){
        // ベクトルをコピー
        ret = vtmp;
      }else if( ope == "+"){
        for( ll i=0; i<ret.size(); i++ ){
          ret[i] += vtmp[i];
        }
      }else if( ope == "-"){
        for( ll i=0; i<ret.size(); i++ ){
          ret[i] -= vtmp[i];
        }
      }
    }else if( s == "+"){
      ope = "+";
    }else if( s == "-"){
      ope = "-";
    }else if( s == ","){
      tmpidx++;
    }else{
      if(isout){
        vtmp = vlist[s];
        if( ope == ""){
          // ベクトルをコピー
          ret = vtmp;
        }else if( ope == "+"){
          for( ll i=0; i<ret.size(); i++ ){
            ret[i] += vtmp[i];
          }
        }else if( ope == "-"){
          for( ll i=0; i<ret.size(); i++ ){
            ret[i] -= vtmp[i];
          }
        }
      }else{
        if( nlist.count(s) != 0){
          tmpnum = nlist[s];
        }else{
          tmpnum = stoi(s);
        }
        vtmp.push_back(tmpnum);
      }
    }
  }
  return ret;
}
int main() {
  int N;
  cin >> N;
  for( ll i=0; i<N; i++ ){
    string cmd;
    cin >> cmd;
    if( cmd == "int"){
      string vname;
      cin >> vname;
      cin.ignore(1024, '=');
      nlist[vname] = calc_int();
    }else if( cmd == "print_int"){
      cout << calc_int() << endl;
    }else if( cmd == "vec"){
      string vname;
      cin >> vname;
      cin.ignore(1024, '=');
      vlist[vname] = calc_vec();
    }else if( cmd == "print_vec"){
      print_vec(calc_vec());
    }
  }
}