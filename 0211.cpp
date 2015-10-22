#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){

  while(a){
    b %= a;
    swap(a, b);
  }
  return b;
}

ll lcm(ll a, ll b){
  return a * b / gcd(a, b);
}

int main(void){

  int n,d[10],v[10];
  while( cin >> n , n ){

    for( int i = 0 ; i < n ; i++ ){
      cin >> d[i] >> v[i];
      int dg = gcd(d[i], v[i]);
      d[i] /= dg;
      v[i] /= dg;
    }
    ll gd = v[0], lm = d[0];
    for( int i = 1 ; i < n ; i++ ){
      lm = lcm(lm, d[i]);
      gd = gcd(gd, v[i]);
    }
    for( int i = 0 ; i < n ; i++ )
      cout << lm * v[i] / gd / d[i] << endl;

  }
  return 0;
}


