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

struct Clock{
  int hour;
  int minute;
  int second;

  void set(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
  }
  string to_str(){
    char ss[10] = {"\0"};
    snprintf(ss, 10, "%02d:%02d:%02d", hour, minute, second);
    string st = ss;
    return st;
  }

  void shift(int diff_second){
    int t = hour * 3600 + minute * 60 + second;
    t = (( t + diff_second ) + 86400 ) % 86400;
    
    hour = t / 3600;
    t %= 3600;
    minute = t / 60;
    second = t % 60;
  }
};
int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;
 
  // Clock構造体のオブジェクトを宣言
  Clock clock;
 
  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);
 
  // 時刻を出力
  cout << clock.to_str() << endl;
 
  // 時計を進める(戻す)
  clock.shift(diff_second);
 
  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}