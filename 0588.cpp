#include <iostream>
#include <queue>

using namespace std;

int n;
char c;

int main(void){
  
  queue<int> s;
 
  cin >> n;
  s.push(n);

  while(1){

    cin >> c;
    if( c == '=' ) break;

    cin >> n;

    if( c == '+' ){
      s.push( s.front() + n );
    }   
    else if( c == '-' ){
      s.push( s.front() - n );
    }
    else if( c == '*' ){
      s.push( s.front() * n );
    }
    else if( c == '/' ){
      s.push( s.front() / n );
    }
    s.pop();
   
  }
  cout << s.front() << endl;
  return 0;
}


