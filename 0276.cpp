#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  for(int i = 0 ; i < 7 ; i++){
    int a, b;
    cin >> a >> b;
    if(a < 0 && b < 0) cout << abs(b) - abs(a) << endl;
    else if(a >= 0 && b <= 0) cout << a + abs(b) << endl;
    else if(a >= 0 && b >= 0) cout << a - b << endl;
  }
  return 0;
}


