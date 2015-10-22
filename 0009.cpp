#include <iostream>
#define max 999999

using namespace std;

int n[max];

int isprime(void){
  for( int i = 0 ; i < max ; i++ )n[i] = 1;
  n[0] = n[1] = 0; 

  for( int i = 2 ; i * i < max ; i++ ){
    if( n[i] == 1 ){
      for( int j = 2 * i ; j < max ; j += i ){
	n[j] = 0;
      }
    }
  }
  return 0;
}

int main(void){
  
  isprime();

  int num;  
  while( cin >> num ){
    int cnt = 0;
    for( int i = 2 ; i <= num ; i++ ){
      if(n[i]){
	cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}


