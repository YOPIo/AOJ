#include <iostream>
#include <cmath>

using namespace std;

char a[8];

void bsort(void){

  for( int i = 0 ; i < 8 ; i++ ){
    for( int j = 7 ; j > i ; j-- ){
      if( a[j-1] > a[j] ){
	char temp = a[j];
	a[j] = a[j-1];
	a[j-1] = temp;
      }
    }
  }
}
int main(void){

  int n;
  cin >> n;
  while(n--){
    cin >> a;
    bsort();
    int max,min;
    max = min = 0;
    for( int i = 0 ; i < 8 ; i++ ){
      min += pow( (double)10 , i )*(a[7-i] - '0');
      max += pow( (double)10 , i )*(a[i] - '0');
    }
    //cout << max << endl << min << endl;
    cout << max - min << endl;
  }
  return 0;
}


