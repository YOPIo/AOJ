#include <iostream>

using namespace std;

int n = 1;

void print( int a ){
  cout << n << ":";
    for( int i = 0 ; i < a ; i++ ) cout << "*";
    cout << endl;
    n++;
}

int main(void){

  int n;
  double s[40];
  int a[6] = {0};

  cin >> n;
    for( int i = 0 ; i < n ; i++ ){
      cin >> s[i];
      if( s[i] < 165 ) a[0]++;
      else if( 165 <=s[i] && s[i] < 170 ) a[1]++;
      else if( 170 <= s[i] && s[i] < 175 )a[2]++;
      else if( 175 <= s[i] && s[i] < 180 ) a[3]++;
      else if( 180 <= s[i] && s[i] < 185 ) a[4]++;
      else a[5]++;
    } 
    for( int i = 0 ; i < 6 ; i++ ){
      print(a[i]);
    }
  return 0;
}


