#include <iostream>
#include <stack>

using namespace std;

int main(void){

  int n;
  stack <int> s;
  while( cin >> n ){
    if(n) s.push(n);
    else {
      cout << s.top() << endl;
      s.pop();
    }
  }
  return 0;
}


