#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int size, n;
  cin >> size >> n; 
  while(n--){
    int x, y;
    cin >> x >> y;
    cout << min(min(x - 1, size - x), min(y - 1, size - y))%3 + 1 << endl;
  }
  return 0;
}


