#include <iostream>

using namespace std;

int main(void){

  char num[10];
  int n[10];
  while( cin >> num[0] ){
    n[0] = num[0] - '0';
    for( int i = 1 ; i < 10 ; i++ ){
      cin >> num[i];
      n[i] = num[i] - '0';
    }

    int m = 9;
    while(m--){
      for( int i = 0 ; i <= m ; i++ ){
	if( n[i] + n[i+1] >= 10 ){
	  int N = (n[i] + n[i+1]) % 10;
	  n[i] = N;
	  //cout << " " << n[i] << " ";
	}
	else{
	  n[i] = n[i] + n[i+1]; 
	  // cout << " " << n[i] << " ";
	}
	//if( i == m )cout << endl;
      }
    }
    cout << n[0] << endl; 
  }
  return 0;
}


