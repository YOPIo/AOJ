#include <iostream>

using namespace std;

long long  dp[11][1001];

void compute(void){

  dp[0][0] = 1;

  for( int i = 0 ; i <= 100 ; i++ ){  // 同じ数は１度しか使えないので、for３つ目でi+kををやる必要がある。
      for( int j = 9 ; j >= 0 ; j-- ){// 入力される n は１~9だから最高で９回ループを行う
	for( int k = 0 ; i+k <= 1000 ; k++ ){  //入力される s は最高1000だから
	dp[j+1][k+i] += dp[j][k];
      }
    }
  }
}

int main(void){

  compute();

  int n,s;
  while( cin >> n >> s, n || s ){
  cout << dp[n][s] << endl;
  }
  return 0;
}


