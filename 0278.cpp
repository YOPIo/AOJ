#include <iostream>

using namespace std;

int main(void){

  int n;
  cin >> n;
  while(n--){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double ans = 0;
    ans = a * c + b * d;
    if(c >= 5 && d >= 2){
      cout << ans * 0.8 << endl;
    }else if(c >= 5 && d < 2){
      d = 2;
      cout << min(ans, (a * c + b * d)* 0.8) << endl;
    }else if(c < 5 && d >= 2){
      c = 5;
      cout << min(ans, (a * c + b * d)* 0.8) << endl;
    }else cout << (int)ans << endl;

  }

  return 0;
}


