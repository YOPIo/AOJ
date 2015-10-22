#include <iostream>
#include <algorithm>
#define MAX 100

using namespace std;

int main(void){

  while(1){

  int edge[MAX + 1] = {0};
  int a,b,mx = 0;
  while( cin >> a >> b , a || b ){
    edge[a]++;
    edge[b]++;
    mx = max(mx, max(a, b));
  }
  if( edge[1] == 0 && edge[2] == 0 ) goto end;

  if( edge[1] % 2 == 1 && edge[2] % 2 == 1 ){
    for( int i = 3 ; i <= mx ; i++ ){
      if( edge[i] % 2 != 0 )goto back;
    }
    cout << "OK" << endl;
  }else{
  back:
    cout << "NG" << endl;
  }
  }
 end:;
  return 0;
}

