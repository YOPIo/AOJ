#include <iostream>

using namespace std;
typedef long long ll;

ll cnt_x, cnt_y, cnt_z;
ll a1, a2, a3, m1, m2, m3;

ll gcd (ll a, ll b){
  if(a < b) swap(a, b);
  if(b == 0) return a;
  return gcd(b, a % b);
}

ll lcm(ll a, ll b){
  if(a < b) swap(a, b);
  return (a/gcd(a, b)) * b;
}

int main(void){

  while(cin >> a1 >> m1 >> a2 >> m2 >> a3 >> m3, a1 + a2 + a3 + m1 + m2 + m3){
    cnt_x = 1, cnt_y = 1, cnt_z = 1;
    ll x = a1 % m1, y = a2 % m2, z = a3 % m3;
    while(x != 1){
      cnt_x++;
      x = a1*x % m1;
    } 
    while(y != 1){
      cnt_y++;
      y = a2*y % m2;
    }
    while(z != 1){
      cnt_z++;
      z = a3*z % m3;
    }
    cout << lcm(lcm(cnt_x, cnt_y), cnt_z) << endl;
  }
  return 0;
}


