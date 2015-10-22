#include <iostream>
#include <algorithm>

using namespace std;

int a[100];
int n,N;

int binary_search(int N){

  int r = n - 1;
  int l = 0;
  int cnt = 0;

  while( r >= l ){
    int x = (r + l)/2;
    cnt++;
    if( a[x] < N ) l = x + 1;
    else if( N < a[x] ) r = x - 1;
    else break;
  }
  return cnt;
}

int main(void){

  while( cin >> n , n ){
    for( int i = 0 ; i < n ; i++ ){ 
    cin >> a[i];
    }

  cin >> N;

  cout << binary_search(N) << endl;
  }
  return 0;
}


