#include <iostream>

using namespace std;

int main(void){

  int a, b;
  for(int i = 0 ; i < 4 ; i++){
    cin >> a >> b;
    switch(a){

    case 1:
      cout << 6000 * b << endl;
      break;
    case 2:
      cout << 4000 * b << endl;
      break;
    case 3:
      cout << 3000 * b << endl;
      break;
    case 4:
      cout << 2000 * b << endl;
      break;

    }
  }
  return 0;
}


