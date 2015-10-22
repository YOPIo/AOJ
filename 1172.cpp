#include <iostream>
#define MAX 250000
using namespace std;

bool TF[MAX];

int main(void){

  int n;
  int cnt;
  

  for( int i = 0 ; i < MAX ; i++ )TF[i] = true;
  TF[0] = TF[1] = false;

  for( int i = 2 ; i * i < MAX ; i++ ){
    if( TF[i] ){
      for( int j = i * 2 ; j <= MAX ; j += i )TF[j] =false;
    }
  }


  while(1){

    cnt = 0;

    cin >> n;
    if( n == 0 )break;

    for( int i = n + 1  ; i <= 2 * n ; i++ ){
      if( TF[i] == true ){
	cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}


