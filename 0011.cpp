#include <iostream>
#include <algorithm>
#define MAX 31

using namespace std;

int main(void){

  int N[MAX];
  int w,n;
  int a,b;
  char ten;

  cin >> w >> n;
  for( int i = 1 ; i <= w ; i++ )N[i] = i;

  for( int i = 1 ; i <= n ; i++ ){
    cin >> a >> ten >> b;
      swap( N[a] , N[b]); //swap関数は第一引数と第二引数を交換する関数
  }
  for( int i = 1 ; i <= w ; i++ ){
    cout << N[i] << endl;
  }
  return 0;
}


