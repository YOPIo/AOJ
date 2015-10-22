#include <iostream>
#define MAX 1000001
using namespace std;

bool dp[MAX];

int getAns(int n){

  int cnt = 0;
  for( int i = 1 ; i <= n ; i++ )
    if( !dp[i] ) cnt++;

  return cnt;
}


int main(void){

  int a,b,n;
  while( cin >> n >> a >> b , n + a + b ){

    fill(dp, dp + MAX, false);
    dp[0] = true;

    for( int i = 0 ; i <= n ; i++ ){
      if( dp[i] ){
	if( i + a <= n ) dp[i + a] = true;
	if( i + b <= n ) dp[i + b] = true;
      }
    }
    cout <<  getAns(n) << endl;
  }
  return 0;
}


