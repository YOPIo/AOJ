#include <iostream>
#define MAX 1000000
using namespace std;

int num[MAX];
int rtime[MAX];

void bubble_sort(int n){

  for( int i = 0 ; i < n - 1 ; i++ ){
    for( int j = n - 1 ; j > i ; j-- ){
      if( rtime[j - 1] > rtime[j] ){

	int temp = rtime[j - 1];
	rtime[j - 1] = rtime[j];
	rtime[j] = temp;

	temp = num[j - 1];
	num[j - 1] = num[j];
	num[j] = temp;

      }
    }
  }

}


int main(void){

  int n;
  while( cin >> n , n ){

    int m1,s1,m2,s2,m3,s3,m4,s4;
    for( int i = 0 ; i < n ; i++ ){
      cin >> num[i] >> m1 >> s1 >> m2 >> s2 >> m3 >> s3 >> m4 >> s4;
      rtime[i] = m1*60 + s1 + m2*60 + s2 + m3*60 + s3 + m4*60 + s4;
    }
    bubble_sort(n);

    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[n - 2] << endl;

  }
  return 0;
}


