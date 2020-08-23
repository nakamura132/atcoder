#include <bits/stdc++.h>
using namespace std;
int main(){
 int pattern;
 cin >> pattern;

 int price;
 string text;
 int N;
 if( pattern == 1 ){
   cin >> price;
   cin >> N;
   cout << N * price << endl;
 }else if ( pattern == 2 ){
   cin >> text;
   cin >> price;
   cin >> N;
   cout << text << "!" << endl;
   cout << N * price << endl;
 }
}