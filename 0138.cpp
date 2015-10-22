#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int num[8];
double runtime[8];
int num3[18];
double runtime3[18];


void bubble_sort1(void){

  for( int i = 0 ; i < 7 ; i++ ){
    for( int j = 7 ; j > i ; j-- ){
      if( runtime[j - 1] > runtime[j] ){

	double temp = runtime[j - 1];
	runtime[j - 1] = runtime[j];
	runtime[j] = temp;

	temp = num[j - 1];
	num[j - 1] = num[j];
	num[j] = temp;

      }
    }
  }

}


void bubble_sort2(void){

  for( int i = 0 ; i < 17 ; i++ ){
    for( int j = 17 ; j > i ; j-- ){
      if( runtime3[j - 1] > runtime3[j] ){

	double temp = runtime3[j - 1];
	runtime3[j - 1] = runtime3[j];
	runtime3[j] = temp;

	temp = num3[j - 1];
	num3[j - 1] = num3[j];
	num3[j] = temp;

      }
    }
  }

}

int main(void){

  int n = 3;
  int I = 0;

  while(n--){

    for( int i = 0 ; i < 8 ; i++ ){
      scanf("%d %lf",&num[i],&runtime[i]);
    }

    bubble_sort1();

    //cout << "---" << endl;
    cout << num[0] << " " << runtime[0] << endl;
    cout << num[1] << " " << runtime[1] << endl;
    // cout << "---" << endl;
 
    for( int i = 2 ; i < 8 ; i++ ){
      num3[I] = num[i];
      runtime3[I] = runtime[i];
      I++;
    }

  }
    bubble_sort2();

    cout << num3[0] << " " << runtime3[0] << endl;
    cout << num3[1] << " " << runtime3[1] << endl;
  return 0;
}


