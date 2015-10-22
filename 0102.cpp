#include <iostream>
#include <cstdio>

using namespace std;

int main(void){

  int n;
  int a[10][10];
  
  while( cin >> n , n ){
    
    for( int i = 0 ; i < n ; i++ )
      for( int j = 0 ; j < n ; j++ )
	cin >> a[i][j];
    
    for( int i = 0 ; i < n ; i++ ){
      for( int j = 0 ; j < n ; j++ ){
	printf("%5d", a[i][j]);
	
	if( j == n - 1 ){
	  int sum = 0;
	  for( int k = 0 ; k < n ; k++ ){
	    sum += a[i][k];
	  }
	  printf("%5d", sum);
	}
      }
      cout << endl;
    }
    
    for( int i = 0 ; i < n ; i++ ){
      int sum = 0;
      for( int j = 0 ; j < n ; j++ ){
	sum += a[j][i];
      }
      printf("%5d", sum);
    }
    
    int sum = 0;
    for( int i = 0 ; i < n ; i++ ){
      for( int j = 0 ; j < n ; j++ ){
	sum += a[i][j];
      }
    }
    printf("%5d", sum);
    cout << endl;
  }
  return 0;
}


